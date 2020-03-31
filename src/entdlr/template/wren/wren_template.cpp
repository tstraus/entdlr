#include "wren_template.h"
#include "context_helper.h"
#include "wren_context.h"

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
        boundForeignMethods["Context::Context::numEnumAttributes(_,_)static"] = ContextHelper::numEnumAttributes;
        boundForeignMethods["Context::Context::numEnumValues(_,_)static"] = ContextHelper::numEnumValues;
        boundForeignMethods["Context::Context::numUnions(_)static"] = ContextHelper::numUnions;
        boundForeignMethods["Context::Context::numUnionAttributes(_,_)static"] = ContextHelper::numUnionAttributes;
        boundForeignMethods["Context::Context::numUnionTypes(_,_)static"] = ContextHelper::numUnionTypes;
        boundForeignMethods["Context::Context::numStructs(_)static"] = ContextHelper::numStructs;
        boundForeignMethods["Context::Context::numStructAttributes(_,_)static"] = ContextHelper::numStructAttributes;
        boundForeignMethods["Context::Context::numFields(_,_)static"] = ContextHelper::numFields;
        boundForeignMethods["Context::Context::numFieldAttributes(_,_,_)static"] = ContextHelper::numFieldAttributes;
        boundForeignMethods["Context::Context::numStructMethods(_,_)static"] = ContextHelper::numStructMethods;
        boundForeignMethods["Context::Context::numStructMethodParameters(_,_,_)static"] = ContextHelper::numStructMethodParameters;
        boundForeignMethods["Context::Context::numFacilities(_)static"] = ContextHelper::numFacilities;
        boundForeignMethods["Context::Context::numFacilityMethods(_,_)static"] = ContextHelper::numFacilityMethods;
        boundForeignMethods["Context::Context::numFacilityMethodParameters(_,_,_)static"] = ContextHelper::numFacilityMethodParameters;

        boundForeignMethods["Context::Context::getNamespaceName(_)static"] = ContextHelper::getNamespaceName;
        boundForeignMethods["Context::Context::getEnumName(_,_)static"] = ContextHelper::getEnumName;
        boundForeignMethods["Context::Context::getEnumType(_,_)static"] = ContextHelper::getEnumType;
        boundForeignMethods["Context::Context::getEnumComment(_,_)static"] = ContextHelper::getEnumComment;
        boundForeignMethods["Context::Context::getEnumAttributeName(_,_,_)static"] = ContextHelper::getEnumAttributeName;
        boundForeignMethods["Context::Context::getEnumAttributeIsString(_,_,_)static"] = ContextHelper::getEnumAttributeIsString;
        boundForeignMethods["Context::Context::getEnumAttributeString(_,_,_)static"] = ContextHelper::getEnumAttributeString;
        boundForeignMethods["Context::Context::getEnumAttributeIsNumber(_,_,_)static"] = ContextHelper::getEnumAttributeIsNumber;
        boundForeignMethods["Context::Context::getEnumAttributeNumber(_,_,_)static"] = ContextHelper::getEnumAttributeNumber;
        boundForeignMethods["Context::Context::getEnumValueName(_,_,_)static"] = ContextHelper::getEnumValueName;
        boundForeignMethods["Context::Context::getEnumValueValue(_,_,_)static"] = ContextHelper::getEnumValueValue;
        boundForeignMethods["Context::Context::getUnionName(_,_)static"] = ContextHelper::getUnionName;
        boundForeignMethods["Context::Context::getUnionComment(_,_)static"] = ContextHelper::getUnionComment;
        boundForeignMethods["Context::Context::getUnionAttributeName(_,_,_)static"] = ContextHelper::getUnionAttributeName;
        boundForeignMethods["Context::Context::getUnionAttributeIsString(_,_,_)static"] = ContextHelper::getUnionAttributeIsString;
        boundForeignMethods["Context::Context::getUnionAttributeString(_,_,_)static"] = ContextHelper::getUnionAttributeString;
        boundForeignMethods["Context::Context::getUnionAttributeIsNumber(_,_,_)static"] = ContextHelper::getUnionAttributeIsNumber;
        boundForeignMethods["Context::Context::getUnionAttributeNumber(_,_,_)static"] = ContextHelper::getUnionAttributeNumber;
        boundForeignMethods["Context::Context::getUnionTypeName(_,_,_)static"] = ContextHelper::getUnionTypeName;
        boundForeignMethods["Context::Context::getUnionTypeIsArray(_,_,_)static"] = ContextHelper::getUnionTypeIsArray;
        boundForeignMethods["Context::Context::getUnionTypeArraySize(_,_,_)static"] = ContextHelper::getUnionTypeArraySize;
        boundForeignMethods["Context::Context::getStructName(_,_)static"] = ContextHelper::getStructName;
        boundForeignMethods["Context::Context::getStructComment(_,_)static"] = ContextHelper::getStructComment;
        boundForeignMethods["Context::Context::getStructAttributeName(_,_,_)static"] = ContextHelper::getStructAttributeName;
        boundForeignMethods["Context::Context::getStructAttributeIsString(_,_,_)static"] = ContextHelper::getStructAttributeIsString;
        boundForeignMethods["Context::Context::getStructAttributeString(_,_,_)static"] = ContextHelper::getStructAttributeString;
        boundForeignMethods["Context::Context::getStructAttributeIsNumber(_,_,_)static"] = ContextHelper::getStructAttributeIsNumber;
        boundForeignMethods["Context::Context::getStructAttributeNumber(_,_,_)static"] = ContextHelper::getStructAttributeNumber;
        boundForeignMethods["Context::Context::getFieldName(_,_,_)static"] = ContextHelper::getFieldName;
        boundForeignMethods["Context::Context::getFieldType(_,_,_)static"] = ContextHelper::getFieldType;
        boundForeignMethods["Context::Context::getFieldIsArray(_,_,_)static"] = ContextHelper::getFieldIsArray;
        boundForeignMethods["Context::Context::getFieldArraySize(_,_,_)static"] = ContextHelper::getFieldArraySize;
        boundForeignMethods["Context::Context::getFieldComment(_,_,_)static"] = ContextHelper::getFieldComment;
        boundForeignMethods["Context::Context::getFieldAttributeName(_,_,_,_)static"] = ContextHelper::getFieldAttributeName;
        boundForeignMethods["Context::Context::getFieldAttributeIsString(_,_,_,_)static"] = ContextHelper::getFieldAttributeIsString;
        boundForeignMethods["Context::Context::getFieldAttributeString(_,_,_,_)static"] = ContextHelper::getFieldAttributeString;
        boundForeignMethods["Context::Context::getFieldAttributeIsNumber(_,_,_,_)static"] = ContextHelper::getFieldAttributeIsNumber;
        boundForeignMethods["Context::Context::getFieldAttributeNumber(_,_,_,_)static"] = ContextHelper::getFieldAttributeNumber;
        boundForeignMethods["Context::Context::getStructMethodName(_,_,_)static"] = ContextHelper::getStructMethodName;
        boundForeignMethods["Context::Context::getStructMethodReturnType(_,_,_)static"] = ContextHelper::getStructMethodReturnType;
        boundForeignMethods["Context::Context::getStructMethodIsStatic(_,_,_)static"] = ContextHelper::getStructMethodIsStatic;
        boundForeignMethods["Context::Context::getStructMethodComment(_,_,_)static"] = ContextHelper::getStructMethodComment;
        boundForeignMethods["Context::Context::getStructMethodParameterName(_,_,_,_)static"] = ContextHelper::getStructMethodParameterName;
        boundForeignMethods["Context::Context::getStructMethodParameterType(_,_,_,_)static"] = ContextHelper::getStructMethodParameterType;
        boundForeignMethods["Context::Context::getStructMethodParameterConstant(_,_,_,_)static"] = ContextHelper::getStructMethodParameterConstant;
        boundForeignMethods["Context::Context::getFacilityName(_,_)static"] = ContextHelper::getFacilityName;
        boundForeignMethods["Context::Context::getFacilityComment(_,_)static"] = ContextHelper::getFacilityComment;
        boundForeignMethods["Context::Context::getFacilityMethodName(_,_,_)static"] = ContextHelper::getFacilityMethodName;
        boundForeignMethods["Context::Context::getFacilityMethodReturnType(_,_,_)static"] = ContextHelper::getFacilityMethodReturnType;
        boundForeignMethods["Context::Context::getFacilityMethodIsStatic(_,_,_)static"] = ContextHelper::getFacilityMethodIsStatic;
        boundForeignMethods["Context::Context::getFacilityMethodComment(_,_,_)static"] = ContextHelper::getFacilityMethodComment;
        boundForeignMethods["Context::Context::getFacilityMethodParameterName(_,_,_,_)static"] = ContextHelper::getFacilityMethodParameterName;
        boundForeignMethods["Context::Context::getFacilityMethodParameterType(_,_,_,_)static"] = ContextHelper::getFacilityMethodParameterType;
        boundForeignMethods["Context::Context::getFacilityMethodParameterConstant(_,_,_,_)static"] = ContextHelper::getFacilityMethodParameterConstant;

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
        std::string source = "";

        if (std::string(name) == "Context")
            source = contextSource;

        else
        {    
            std::string path(name);
            path += ".wren";
            std::ifstream fin;
            fin.open(path, std::ios::in);
            std::stringstream buffer;
            buffer << fin.rdbuf() << '\0';
            source = buffer.str();
        }

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
