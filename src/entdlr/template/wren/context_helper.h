#ifndef __ENTDLR_CONTEXT_HELPER_H__
#define __ENTDLR_CONTEXT_HELPER_H__

#include "context.h"
#include "wren.hpp"

#include "optional.hpp"
using nonstd::optional;

namespace Entdlr
{
    class ContextHelper
    {
    public:
        // save out context
        static void setContext(const Context& c);

        // get sizes
        static void numIncludes(WrenVM* vm);
        static void numNamespaces(WrenVM* vm);
        static void numEnums(WrenVM* vm);
        static void numEnumAttributes(WrenVM* vm);
        static void numEnumValues(WrenVM* vm);
        static void numUnions(WrenVM* vm);
        static void numUnionAttributes(WrenVM* vm);
        static void numUnionTypes(WrenVM* vm);
        static void numStructs(WrenVM* vm);
        static void numStructAttributes(WrenVM* vm);
        static void numFields(WrenVM* vm);
        static void numFieldAttributes(WrenVM* vm);
        static void numStructMethods(WrenVM* vm);
        static void numStructMethodParameters(WrenVM* vm);
        static void numInterfaces(WrenVM* vm);
        static void numInterfaceMethods(WrenVM* vm);
        static void numInterfaceMethodParameters(WrenVM* vm);

        // Include
        static void getIncludeName(WrenVM* vm);

        // Namespace
        static void getNamespaceName(WrenVM* vm);

        // Enum
        static void getEnumName(WrenVM* vm);
        static void getEnumType(WrenVM* vm);
        static void getEnumComment(WrenVM* vm);
        static void getEnumAttributeName(WrenVM* vm);
        static void getEnumAttributeIsString(WrenVM* vm);
        static void getEnumAttributeString(WrenVM* vm);
        static void getEnumAttributeIsNumber(WrenVM* vm);
        static void getEnumAttributeNumber(WrenVM* vm);
        // EnumValue
        static void getEnumValueName(WrenVM* vm);
        static void getEnumValueValue(WrenVM* vm);

        // Union
        static void getUnionName(WrenVM* vm);
        static void getUnionComment(WrenVM* vm);
        static void getUnionAttributeName(WrenVM* vm);
        static void getUnionAttributeIsString(WrenVM* vm);
        static void getUnionAttributeString(WrenVM* vm);
        static void getUnionAttributeIsNumber(WrenVM* vm);
        static void getUnionAttributeNumber(WrenVM* vm);
        // UnionType
        static void getUnionTypeName(WrenVM* vm);
        static void getUnionTypeIsArray(WrenVM* vm);
        static void getUnionTypeArraySize(WrenVM* vm);

        // Struct
        static void getStructName(WrenVM* vm);
        static void getStructComment(WrenVM* vm);
        static void getStructAttributeName(WrenVM* vm);
        static void getStructAttributeIsString(WrenVM* vm);
        static void getStructAttributeString(WrenVM* vm);
        static void getStructAttributeIsNumber(WrenVM* vm);
        static void getStructAttributeNumber(WrenVM* vm);
        // Field
        static void getFieldName(WrenVM* vm);
        static void getFieldType(WrenVM* vm);
        static void getFieldIsArray(WrenVM* vm);
        static void getFieldArraySize(WrenVM* vm);
        static void getFieldComment(WrenVM* vm);
        // Attribute
        static void getFieldAttributeName(WrenVM* vm);
        static void getFieldAttributeIsString(WrenVM* vm);
        static void getFieldAttributeString(WrenVM* vm);
        static void getFieldAttributeIsNumber(WrenVM* vm);
        static void getFieldAttributeNumber(WrenVM* vm);
        // Method
        static void getStructMethodName(WrenVM* vm);
        static void getStructMethodReturnType(WrenVM* vm);
        static void getStructMethodReturnIsReference(WrenVM* vm);
        static void getStructMethodIsStatic(WrenVM* vm);
        static void getStructMethodConstant(WrenVM* vm);
        static void getStructMethodComment(WrenVM* vm);
        // Parameter
        static void getStructMethodParameterName(WrenVM* vm);
        static void getStructMethodParameterType(WrenVM* vm);
        static void getStructMethodParameterConstant(WrenVM* vm);
        static void getStructMethodParameterReference(WrenVM* vm);

        // Interface
        static void getInterfaceName(WrenVM* vm);
        static void getInterfaceComment(WrenVM* vm);
        // Method
        static void getInterfaceMethodName(WrenVM* vm);
        static void getInterfaceMethodReturnType(WrenVM* vm);
        static void getInterfaceMethodReturnIsReference(WrenVM* vm);
        static void getInterfaceMethodIsStatic(WrenVM* vm);
        static void getInterfaceMethodConstant(WrenVM* vm);
        static void getInterfaceMethodComment(WrenVM* vm);
        // Parameter
        static void getInterfaceMethodParameterName(WrenVM* vm);
        static void getInterfaceMethodParameterType(WrenVM* vm);
        static void getInterfaceMethodParameterConstant(WrenVM* vm);
        static void getInterfaceMethodParameterReference(WrenVM* vm);

    private:
        static optional<Include> getInclude(const std::string& _include);
        static optional<Namespace> getNamespace(const std::string& _namespace);
        static optional<Enum> getEnum(const std::string& _namespace, const std::string& _enum);
        static optional<Enum> getEnum(const std::string& _namespace, size_t index);
        static optional<EnumValue> getEnumValue(const std::string& _namespace, const std::string& _enum, size_t index);
        static optional<Union> getUnion(const std::string& _namespace, const std::string& _union);
        static optional<Union> getUnion(const std::string& _namespace, size_t index);
        static optional<UnionType> getUnionType(const std::string& _namespace, const std::string& _union, size_t index);
        static optional<Struct> getStruct(const std::string& _namespace, const std::string& _struct);
        static optional<Struct> getStruct(const std::string& _namespace, size_t index);
        static optional<Field> getField(const std::string& _namespace, const std::string& _struct, const std::string& _field);
        static optional<Field> getField(const std::string& _namespace, const std::string& _struct, size_t index);
        static optional<Attribute> getEnumAttribute(const std::string& _namespace, const std::string& _enum, size_t index);
        static optional<Attribute> getUnionAttribute(const std::string& _namespace, const std::string& _union, size_t index);
        static optional<Attribute> getStructAttribute(const std::string& _namespace, const std::string& _struct, size_t index);
        static optional<Attribute> getFieldAttribute(const std::string& _namespace, const std::string& _struct, const std::string& _field, size_t index);
        static optional<Method> getStructMethod(const std::string& _namespace, const std::string& _struct, const std::string& _method);
        static optional<Method> getStructMethod(const std::string& _namespace, const std::string& _struct, size_t index);
        static optional<Method> getInterfaceMethod(const std::string& _namespace, const std::string& _interface, const std::string& _method);
        static optional<Method> getInterfaceMethod(const std::string& _namespace, const std::string& _interface, size_t index);
        static optional<Parameter> getStructParameter(const std::string& _namespace, const std::string& _struct, const std::string& _method, size_t index);
        static optional<Parameter> getInterfaceParameter(const std::string& _namespace, const std::string& _interface, const std::string& _method, size_t index);
        static optional<Interface> getInterface(const std::string& _namespace, const std::string& _interface);
        static optional<Interface> getInterface(const std::string& _namespace, size_t index);
    };
};

#endif // __ENTDLR_CONTEXT_HELPER_H__
