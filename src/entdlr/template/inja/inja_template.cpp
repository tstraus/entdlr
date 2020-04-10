#include "inja_template.h"
#include "json_helpers.h"
#include "type_map.h"

#include <filesystem>
#include <iostream>
#include <algorithm>

#include "inja.hpp"

using std::cout; using std::endl; using std::cerr;

std::string scriptDir;

namespace Entdlr
{
    std::string InjaTemplate::getFileExtension() const
    {
        return ".tmpl";
    }

    std::string InjaTemplate::applyTemplate(const Context& context, const std::string& template_name)
    {
        // save the location for loading other scripts
        scriptDir = std::filesystem::path(template_name).parent_path().string();
        if (scriptDir == "")
            scriptDir = "./";

        // open and read the template file
        std::ifstream templateFile(template_name);
        std::stringstream tmpl;
        tmpl << templateFile.rdbuf();

        auto c = context;

        std::string scriptContent = "";

        // look for helper files
        const auto templateExtension = getFileExtension();
        if (template_name != templateExtension &&
            template_name.size() > templateExtension.size() &&
            template_name.substr(template_name.size() - templateExtension.size()) == ".tmpl"
            )
        {
            // check for a json type map file
            std::string typeMapFilename = template_name.substr(0, template_name.size() - templateExtension.size()) + ".json";
            if (std::filesystem::exists(typeMapFilename))
            {
                TypeMap typeMap(typeMapFilename);
                c = typeMap.applyMapping(context);
            }

            // check for a wren file with functions in it
            std::string functionsFilename = template_name.substr(0, template_name.size() - templateExtension.size()) + ".wren";
            if (std::filesystem::exists(functionsFilename))
            {
                // open and read the script
                std::ifstream functionsFile(functionsFilename);
                std::stringstream functions;
                functions << functionsFile.rdbuf();
                scriptContent = functions.str();
            }
        }

        return applyString(c, tmpl.str(), scriptContent);
    }

    std::string InjaTemplate::applyString(const Context& context, const std::string& tmpl, const std::string& functions)
    {
        // set up wren first
        WrenConfiguration config;
        wrenInitConfiguration(&config);
        config.writeFn = print;
        config.errorFn = error;
        config.loadModuleFn = loadModule;
        vm = wrenNewVM(&config);

        // load the script into wren
        const auto loadResult = wrenInterpret(vm, "entdlr", functions.c_str());
        if (loadResult != WrenInterpretResult::WREN_RESULT_SUCCESS)
            return "";

        json j;
        j["entdlr"] = context;

        //cout << j.dump(true) << endl;
        //cout << tmpl.str() << endl;

        inja::Environment env;
        env.set_fallback
        (
            [this](const std::string& name, const unsigned int numArgs, const inja::Arguments& args)
            {
                return checkWren(name, numArgs, args);
            }
        );

        const auto output = env.render(tmpl, j);

        wrenFreeVM(vm);

        return output;
    }

    std::string InjaTemplate::checkWren(const std::string& name, const unsigned int numArgs, const inja::Arguments& args)
    {
        // get a wren compatible function name
        std::string functionName = name;
        functionName.erase(std::remove(functionName.begin(), functionName.end(), '\"'), functionName.end());
        functionName += "(";
        for (unsigned int i = 0; i < numArgs; i++)
        {
            functionName += "_";
            if (i != numArgs - 1) functionName += ",";
        }
        functionName += ")";

        // get wren ready to try calling the method
        wrenEnsureSlots(vm, 1);
        wrenGetVariable(vm, "entdlr", "Functions", 0); // (module_name, class_name)
        WrenHandle* variable = wrenGetSlotHandle(vm, 0); // an instance of the class
        WrenHandle* handle = wrenMakeCallHandle(vm, functionName.c_str()); // method signature

        wrenEnsureSlots(vm, (int)args.size() + 1); // make sure we have enough slots for the arguments

        // put inja's arguments into wren's argument slots
        for (int i = 0; i < args.size(); i++)
        {
            const auto& arg = args[i];
            switch (arg->type())
            {
            case nlohmann::detail::value_t::boolean:
                wrenSetSlotBool(vm, i + 1, arg->get<bool>());
                break;

            case nlohmann::detail::value_t::string:
                wrenSetSlotString(vm, i + 1, arg->get<std::string>().c_str());
                break;

            case nlohmann::detail::value_t::number_float:
            case nlohmann::detail::value_t::number_integer:
            case nlohmann::detail::value_t::number_unsigned:
                wrenSetSlotDouble(vm, i + 1, arg->get<double>());
                break;

            default:
                cout << "ERROR: invalid type given, " << name << " argument #" << i + 1 << endl;
                return "";
            }
        }

        wrenSetSlotHandle(vm, 0, variable); // call it on the instance of the class we made

        const auto executeResult = wrenCall(vm, handle);
        if (executeResult != WrenInterpretResult::WREN_RESULT_SUCCESS)
            return "";

        // figure out what the script method returned and turn it into a string
        const auto returnType = wrenGetSlotType(vm, 0);
        std::string returnValue = "";
        switch (returnType)
        {
        case WrenType::WREN_TYPE_BOOL:
            returnValue = wrenGetSlotBool(vm, 0) ? "true" : "false";
            break;

        case WrenType::WREN_TYPE_NUM:
            returnValue = std::to_string(wrenGetSlotDouble(vm, 0));
            break;

        case WrenType::WREN_TYPE_STRING:
            returnValue = std::string(wrenGetSlotString(vm, 0));
            break;

        default:
            cout << "ERROR: Invalid return type from Wren function \"" << functionName << "\", must be boolean, number, or string" << endl;
            break;
        }

        return returnValue;
    }

    void InjaTemplate::error(WrenVM* vm, WrenErrorType type, const char* module_name, int line, const char* message)
    {
        switch (type)
        {
        case WrenErrorType::WREN_ERROR_COMPILE:
            cout << "ERROR: Wren Compilation Failed -> " << module_name << " : " << line << " : " << message << endl;
            break;

        case WrenErrorType::WREN_ERROR_RUNTIME:
            cout << "ERROR: Wren Runtime Failed -> " << message << endl;
            break;

        case WrenErrorType::WREN_ERROR_STACK_TRACE:
            cout << "ERROR: Wren Stack Trace -> " << module_name << " : " << line << " : " << message << endl;
            break;

        default:
            break;
        }
    }

    void InjaTemplate::print(WrenVM* vm, const char* text)
    {
        // wren adds its own newlines in a separte call to print
        cerr << text;
    }

    char* InjaTemplate::loadModule(WrenVM* vm, const char* name)
    {
        std::string source = "";

        std::string path = scriptDir + "/";
        path += std::string(name);
        path += ".wren";
        std::ifstream fin;
        fin.open(path, std::ios::in);
        std::stringstream buffer;
        buffer << fin.rdbuf() << '\0';
        source = buffer.str();

        char* cbuffer = (char*)malloc(source.size());
        std::memcpy(cbuffer, source.c_str(), source.size());

        return cbuffer;
    }
}
