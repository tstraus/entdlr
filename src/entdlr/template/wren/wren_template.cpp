#include "wren_template.h"
#include "context_helper.h"

#include <unordered_map>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

using std::cout; using std::endl;

std::unordered_map<std::string, WrenForeignMethodFn> boundForeignMethods;
std::unordered_map<std::string, WrenForeignClassMethods> boundForeignClasses;

std::stringstream outputBuffer;

namespace Entdlr
{
    WrenTemplate::WrenTemplate()
    {
        outputBuffer.clear();

        // map our foreign methods
        boundForeignMethods["Context::Context::numNamespaces()static"] = ContextHelper::numNamespaces;
        boundForeignMethods["Context::Context::numEnums(_)static"] = ContextHelper::numEnums;
        boundForeignMethods["Context::Context::numEnumValues(_,_)static"] = ContextHelper::numEnumValues;
        boundForeignMethods["Context::Context::numUnions(_)static"] = ContextHelper::numUnions;
        boundForeignMethods["Context::Context::numUnionTypes(_,_)static"] = ContextHelper::numUnionTypes;
        boundForeignMethods["Context::Context::numStructs(_)static"] = ContextHelper::numStructs;
        boundForeignMethods["Context::Context::numFields(_,_)static"] = ContextHelper::numFields;
        boundForeignMethods["Context::Context::numAttributes(_,_,_)static"] = ContextHelper::numAttributes;
        boundForeignMethods["Context::Context::numStructMethods(_,_)static"] = ContextHelper::numStructMethods;
        boundForeignMethods["Context::Context::numStructMethodParameters(_,_,_)static"] = ContextHelper::numStructMethodParameters;
        boundForeignMethods["Context::Context::getNamespaceName(_)static"] = ContextHelper::getNamespaceName;
        boundForeignMethods["Context::Context::getEnumName(_,_)static"] = ContextHelper::getEnumName;
        boundForeignMethods["Context::Context::getEnumType(_,_)static"] = ContextHelper::getEnumType;
        boundForeignMethods["Context::Context::getEnumValueName(_,_,_)static"] = ContextHelper::getEnumValueName;
        boundForeignMethods["Context::Context::getEnumValueValue(_,_,_)static"] = ContextHelper::getEnumValueValue;
        boundForeignMethods["Context::Context::getUnionName(_,_)static"] = ContextHelper::getUnionName;
        boundForeignMethods["Context::Context::getUnionTypeName(_,_,_)static"] = ContextHelper::getUnionTypeName;
        boundForeignMethods["Context::Context::getUnionTypeIsArray(_,_,_)static"] = ContextHelper::getUnionTypeIsArray;
        boundForeignMethods["Context::Context::getUnionTypeArraySize(_,_,_)static"] = ContextHelper::getUnionTypeArraySize;
        boundForeignMethods["Context::Context::getStructName(_,_)static"] = ContextHelper::getStructName;
        boundForeignMethods["Context::Context::getFieldName(_,_,_)static"] = ContextHelper::getFieldName;
        boundForeignMethods["Context::Context::getFieldType(_,_,_)static"] = ContextHelper::getFieldType;
        boundForeignMethods["Context::Context::getFieldIsArray(_,_,_)static"] = ContextHelper::getFieldIsArray;
        boundForeignMethods["Context::Context::getFieldArraySize(_,_,_)static"] = ContextHelper::getFieldArraySize;
        boundForeignMethods["Context::Context::getAttributeName(_,_,_,_)static"] = ContextHelper::getAttributeName;
        boundForeignMethods["Context::Context::getAttributeIsString(_,_,_,_)static"] = ContextHelper::getAttributeIsString;
        boundForeignMethods["Context::Context::getAttributeString(_,_,_,_)static"] = ContextHelper::getAttributeString;
        boundForeignMethods["Context::Context::getAttributeIsNumber(_,_,_,_)static"] = ContextHelper::getAttributeIsNumber;
        boundForeignMethods["Context::Context::getAttributeNumber(_,_,_,_)static"] = ContextHelper::getAttributeNumber;
        boundForeignMethods["Context::Context::getStructMethodName(_,_,_)static"] = ContextHelper::getStructMethodName;
        boundForeignMethods["Context::Context::getStructMethodReturnType(_,_,_)static"] = ContextHelper::getStructMethodReturnType;
        boundForeignMethods["Context::Context::getStructMethodIsStatic(_,_,_)static"] = ContextHelper::getStructMethodIsStatic;
        boundForeignMethods["Context::Context::getStructMethodParameterName(_,_,_,_)static"] = ContextHelper::getStructMethodParameterName;
        boundForeignMethods["Context::Context::getStructMethodParameterType(_,_,_,_)static"] = ContextHelper::getStructMethodParameterType;
        boundForeignMethods["Context::Context::getStructMethodParameterConstant(_,_,_,_)static"] = ContextHelper::getStructMethodParameterConstant;

        WrenConfiguration config;
        wrenInitConfiguration(&config);
        config.writeFn = print;
        config.loadModuleFn = loadModule;
        config.bindForeignClassFn = bindForeignClass;
        config.bindForeignMethodFn = bindForeignMethod;
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
        // give our context to out helpers
        ContextHelper::setContext(context);

        // open and read the script file
        std::ifstream script_file(template_name);
        std::stringstream script;
        script << script_file.rdbuf();

        // execute the script
        WrenInterpretResult result = wrenInterpret(vm, "entdlr", script.str().c_str());

        // return the resulting output
        if (result == WrenInterpretResult::WREN_RESULT_SUCCESS)
            return outputBuffer.str();
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
        fullSignature += "::";
        fullSignature += className;
        fullSignature += "::";
        fullSignature += signature;

        if (isStatic)
            fullSignature += "static";

        //cout << "foreign -> " << fullSignature << endl;

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
        //if (std::string(text) != "\n")
        //    cout << "script -> " << text << endl;

        // append to the existing output
        outputBuffer << text;
    }
};
