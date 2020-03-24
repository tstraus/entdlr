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

    private:
        static std::optional<Namespace> getNamespace(const std::string& _namespace);
        static std::optional<Enum> getEnum(const std::string& _namespace, const std::string& _enum);
        static std::optional<Enum> getEnum(const std::string& _namespace, size_t index);
        static std::optional<EnumValue> getEnumValue(const std::string& _namespace, const std::string& _enum, size_t index);
        static std::optional<Union> getUnion(const std::string& _namespace, const std::string& _union);
        static std::optional<Union> getUnion(const std::string& _namespace, size_t index);
        static std::optional<UnionType> getUnionType(const std::string& _namespace, const std::string& _union, size_t index);


    };
};

#endif // __ENTDLR_CONTEXT_HELPER_H__