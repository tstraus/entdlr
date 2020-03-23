#include "wren_template.h"

#include <unordered_map>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

using std::cout; using std::endl;

std::unordered_map<std::string, WrenForeignMethodFn> boundForeignMethods;
std::unordered_map<std::string, WrenForeignClassMethods> boundForeignClasses;

std::stringstream ss;

namespace Entdlr
{
    WrenTemplate::WrenTemplate()
    {
        ss.clear();

        WrenConfiguration config;
        wrenInitConfiguration(&config);
        config.writeFn = print;
        config.loadModuleFn = loadModule;
        config.errorFn = error;

        vm = wrenNewVM(&config);
    }

    WrenTemplate::~WrenTemplate()
    {
        wrenFreeVM(vm);
    }

    std::string WrenTemplate::getFileExtension() const
    {
        return ".wren";
    }

    std::string WrenTemplate::applyTemplate(const Context& context, const std::string& template_name)
    {
        // open and read the script file
        std::ifstream script_file(template_name);
        std::stringstream script;
        script << script_file.rdbuf();

        WrenInterpretResult result = wrenInterpret(vm, "entdlr", script.str().c_str());

        if (result == WrenInterpretResult::WREN_RESULT_SUCCESS)
            return ss.str();
        else return "";
    }

    char* WrenTemplate::loadModule(WrenVM* vm, const char* name)
    {
        std::string path(name);
        path += ".wren";
        std::ifstream fin;
        fin.open(path, std::ios::in);
        std::stringstream buffer;
        buffer << fin.rdbuf() << '\0';
        std::string source = buffer.str();

        char* cbuffer = (char*)malloc(source.size());
        std::memcpy(cbuffer, source.c_str(), source.size());

        return cbuffer;
    }

    void WrenTemplate::error(WrenVM* vm, WrenErrorType type, const char* module_name, int line, const char* message)
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

    WrenForeignMethodFn WrenTemplate::bindForeignMethod(WrenVM* vm, const char* module,
        const char* className, bool isStatic, const char* signature)
    {
        std::string fullSignature(module);
        fullSignature += className;
        fullSignature += signature;

        if (isStatic)
            fullSignature += "s";

        auto it = boundForeignMethods.find(fullSignature);
        if (it != boundForeignMethods.end())
            return it->second;

        return nullptr;
    }

    WrenForeignClassMethods WrenTemplate::bindForeignClass(WrenVM*, const char* module, const char* className)
    {
        std::string name(module);
        name += name;
        auto it = boundForeignClasses.find(name);
        if (it != boundForeignClasses.end())
            return it->second;

        return WrenForeignClassMethods{ nullptr, nullptr };
    }

    void WrenTemplate::print(WrenVM* vm, const char* text)
    {
        // wren adds it's own newlines in a separte call to print
        if (std::string(text) != "\n")
            cout << "script -> " << text << endl;

        ss << text;
    }
};
