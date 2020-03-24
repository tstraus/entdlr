#include "context_helper.h"

#include <iostream>
using std::cout; using std::endl;

namespace Entdlr
{
    Context context;

    void ContextHelper::setContext(const Context& c)
    {
        context = c;
    }

    void ContextHelper::numNamespaces(WrenVM* vm)
    {
        wrenSetSlotDouble(vm, 0, context.namespaces.size());
    }

    void ContextHelper::numEnums(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->enums.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numEnumValues(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto e = getEnum(_namespace, _enum))
            output = e->values.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numUnions(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->unions.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numUnionTypes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto u = getUnion(_namespace, _union))
            output = u->types.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getNamespaceName(WrenVM* vm)
    {
        size_t index = wrenGetSlotDouble(vm, 1);

        std::string output = "";
        if (context.namespaces.size() > index)
            output = context.namespaces[index].name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = wrenGetSlotDouble(vm, 2);

        std::string output = "";
        if (auto e = getEnum(_namespace, index))
            output = e->name;
        
        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);

        std::string output = "";
        if (auto e = getEnum(_namespace, _enum))
            output = e->type;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumValueName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto v = getEnumValue(_namespace, _enum, index))
            output = v->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumValueValue(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        int64_t output = 0;
        if (auto v = getEnumValue(_namespace, _enum, index))
            output = v->value;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getUnionName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = wrenGetSlotDouble(vm, 2);

        std::string output = "";
        if (auto u = getUnion(_namespace, index))
            output = u->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionTypeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto t = getUnionType(_namespace, _union, index))
            output = t->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionTypeIsArray(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto t = getUnionType(_namespace, _union, index))
            output = t->isArray;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getUnionTypeArraySize(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        size_t output = 0;
        if (auto t = getUnionType(_namespace, _union, index))
            output = t->arraySize;

        wrenSetSlotDouble(vm, 0, output);
    }

    std::optional<Namespace> ContextHelper::getNamespace(const std::string& _namespace)
    {
        for (const auto& n : context.namespaces)
        {
            if (n.name == _namespace)
                return n;
        }

        return {};
    }

    std::optional<Enum> ContextHelper::getEnum(const std::string& _namespace, const std::string& _enum)
    {
        if (auto n = getNamespace(_namespace))
        {
            for (const auto& e : n->enums)
            {
                if (e.name == _enum)
                    return e;
            }
        }

        return {};
    }

    std::optional<Enum> ContextHelper::getEnum(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->enums.size() > index)
                return n->enums[index];
        }

        return {};
    }

    std::optional<EnumValue> ContextHelper::getEnumValue(const std::string& _namespace, const std::string& _enum, size_t index)
    {
        if (auto e = getEnum(_namespace, _enum))
        {
            if (e->values.size() > index)
                return e->values[index];
        }

        return {};
    }

    std::optional<Union> ContextHelper::getUnion(const std::string& _namespace, const std::string& _union)
    {
        if (auto n = getNamespace(_namespace))
        {
            for (const auto& u : n->unions)
            {
                if (u.name == _union)
                    return u;
            }
        }

        return {};
    }

    std::optional<Union> ContextHelper::getUnion(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->unions.size() > index)
                return n->unions[index];
        }

        return {};
    }

    std::optional<UnionType> ContextHelper::getUnionType(const std::string& _namespace, const std::string& _union, size_t index)
    {
        if (auto u = getUnion(_namespace, _union))
        {
            if (u->types.size() > index)
                return u->types[index];
        }

        return {};
    }
};
