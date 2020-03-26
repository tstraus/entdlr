#ifndef __ENTDLR_CONTEXT_HELPER_H__
#define __ENTDLR_CONTEXT_HELPER_H__

#include "context.h"
#include "wren.hpp"

#include <optional>

namespace Entdlr
{
    class ContextHelper
    {
    public:
        // save out context
        static void setContext(const Context& c);

        // get sizes
        static void numNamespaces(WrenVM* vm);
        static void numEnums(WrenVM* vm);
        static void numEnumValues(WrenVM* vm);
        static void numUnions(WrenVM* vm);
        static void numUnionTypes(WrenVM* vm);
        static void numStructs(WrenVM* vm);
        static void numFields(WrenVM* vm);
        static void numAttributes(WrenVM* vm);
        static void numStructMethods(WrenVM* vm);
        static void numStructMethodParameters(WrenVM* vm);

        // Namespace
        static void getNamespaceName(WrenVM* vm);

        // Enum
        static void getEnumName(WrenVM* vm);
        static void getEnumType(WrenVM* vm);
        // EnumValue
        static void getEnumValueName(WrenVM* vm);
        static void getEnumValueValue(WrenVM* vm);

        // Union
        static void getUnionName(WrenVM* vm);
        // UnionType
        static void getUnionTypeName(WrenVM* vm);
        static void getUnionTypeIsArray(WrenVM* vm);
        static void getUnionTypeArraySize(WrenVM* vm);

        // Struct
        static void getStructName(WrenVM* vm);
        // Field
        static void getFieldName(WrenVM* vm);
        static void getFieldType(WrenVM* vm);
        static void getFieldIsArray(WrenVM* vm);
        static void getFieldArraySize(WrenVM* vm);
        // Attribute
        static void getAttributeName(WrenVM* vm);
        static void getAttributeIsString(WrenVM* vm);
        static void getAttributeString(WrenVM* vm);
        static void getAttributeIsNumber(WrenVM* vm);
        static void getAttributeNumber(WrenVM* vm);
        // Method
        static void getStructMethodName(WrenVM* vm);
        static void getStructMethodReturnType(WrenVM* vm);
        static void getStructMethodIsStatic(WrenVM* vm);
        // Parameter
        static void getStructMethodParameterName(WrenVM* vm);
        static void getStructMethodParameterType(WrenVM* vm);
        static void getStructMethodParameterConstant(WrenVM* vm);

    private:
        static std::optional<Namespace> getNamespace(const std::string& _namespace);
        static std::optional<Enum> getEnum(const std::string& _namespace, const std::string& _enum);
        static std::optional<Enum> getEnum(const std::string& _namespace, size_t index);
        static std::optional<EnumValue> getEnumValue(const std::string& _namespace, const std::string& _enum, size_t index);
        static std::optional<Union> getUnion(const std::string& _namespace, const std::string& _union);
        static std::optional<Union> getUnion(const std::string& _namespace, size_t index);
        static std::optional<UnionType> getUnionType(const std::string& _namespace, const std::string& _union, size_t index);
        static std::optional<Struct> getStruct(const std::string& _namespace, const std::string& _struct);
        static std::optional<Struct> getStruct(const std::string& _namespace, size_t index);
        static std::optional<Field> getField(const std::string& _namespace, const std::string& _struct, const std::string& _field);
        static std::optional<Field> getField(const std::string& _namespace, const std::string& _struct, size_t index);
        static std::optional<Attribute> getAttribute(const std::string& _namespace, const std::string& _struct, const std::string& _field, size_t index);
        static std::optional<Method> getMethod(const std::string& _namespace, const std::string& _struct, const std::string& _method);
        static std::optional<Method> getMethod(const std::string& _namespace, const std::string& _struct, size_t index);
        static std::optional<Parameter> getParameter(const std::string& _namespace, const std::string& _struct, const std::string& _method, size_t index);
    };
};

#endif // __ENTDLR_CONTEXT_HELPER_H__