#include "inja_template.h"
#include "json_helpers.h"
#include "type_map.h"

#include <filesystem>
#include <iostream>
#include <algorithm>

#include "inja.hpp"

using std::cout; using std::endl;

namespace Entdlr
{
    std::string InjaTemplate::getFileExtension() const
    {
        return ".tmpl";
    }

    std::string InjaTemplate::applyTemplate(const Context& context, const std::string& template_name)
    {
        // open and read the template file
        std::ifstream template_file(template_name);
        std::stringstream tmpl;
        tmpl << template_file.rdbuf();

        auto c = context;

        // try to open a type map file for the template
        const auto templateExtension = getFileExtension();
        if (template_name != templateExtension &&
            template_name.size() > templateExtension.size() &&
            template_name.substr(template_name.size() - templateExtension.size()) == ".tmpl"
            )
        {
            std::string typeMapFilename = template_name.substr(0, template_name.size() - templateExtension.size()) + "_mapping.json";
            
            if (std::filesystem::exists(typeMapFilename))
            {
                TypeMap typeMap(typeMapFilename);
                c = typeMap.applyMapping(context);
            }
        }

        return applyString(c, tmpl.str());
    }

    std::string InjaTemplate::applyString(const Context& context, const std::string& tmpl)
    {
        // set up wren first
        WrenConfiguration config;
        wrenInitConfiguration(&config);
        config.writeFn = print;
        config.errorFn = error;
        vm = wrenNewVM(&config);

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
        for (int i = 0; i < numArgs; i++)
        {
            functionName += "_";
            if (i != numArgs - 1) functionName += ",";
        }
        functionName += ")";

        // make the inja arguments easier to work with
        std::vector<std::string> arguments;
        for (const auto& arg : args)
            arguments.push_back(*arg);

        std::string wrenSource = R"(
class Entdlr {
    static do_something(what) {
        System.print(what)

        return "I did the thing -> " + what
    }
}
)";

        // load the script into wren
        const auto loadResult = wrenInterpret(vm, "entdlr", wrenSource.c_str());
        if (loadResult != WrenInterpretResult::WREN_RESULT_SUCCESS)
            cout << "bad load stuff" << endl;

        // get wren ready to try calling the method
        wrenEnsureSlots(vm, 1);
        wrenGetVariable(vm, "entdlr", "Entdlr", 0); // (module_name, class_name)
        WrenHandle* variable = wrenGetSlotHandle(vm, 0); // an instance of the class
        WrenHandle* handle = wrenMakeCallHandle(vm, functionName.c_str()); // method signature
        wrenEnsureSlots(vm, 2); // one more than number of arguments
        wrenSetSlotString(vm, 1, arguments[0].c_str()); // argument to the wren method
        wrenSetSlotHandle(vm, 0, variable); // call it on the instance of the class we made

        const auto executeResult = wrenCall(vm, handle);
        if (executeResult != WrenInterpretResult::WREN_RESULT_SUCCESS)
            cout << "bad execute stuff" << endl;

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

        cout << returnValue << endl;

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
        cout << text;
    }
}
