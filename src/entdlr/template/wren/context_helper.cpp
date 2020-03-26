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

    void ContextHelper::numStructs(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->structs.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numFields(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto s = getStruct(_namespace, _struct))
            output = s->fields.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numAttributes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);

        size_t output = 0;
        if (auto f = getField(_namespace, _struct, _field))
            output = f->attributes.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numStructMethods(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto s = getStruct(_namespace, _struct))
            output = s->methods.size();

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::numStructMethodParameters(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        size_t output = 0;
        if (auto m = getMethod(_namespace, _struct, _method))
            output = m->parameters.size();

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

    void ContextHelper::getStructName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = wrenGetSlotDouble(vm, 2);

        std::string output = "";
        if (auto s = getStruct(_namespace, index))
            output = s->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto f = getField(_namespace, _struct, index))
            output = f->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto f = getField(_namespace, _struct, index))
            output = f->type;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldIsArray(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto f = getField(_namespace, _struct, index))
            output = f->isArray;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getFieldArraySize(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        size_t output = 0;
        if (auto f = getField(_namespace, _struct, index))
            output = f->arraySize;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getAttributeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto a = getAttribute(_namespace, _struct, _field, index))
            output = a->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getAttributeIsString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto a = getAttribute(_namespace, _struct, _field, index))
            output = a->isString;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getAttributeString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto a = getAttribute(_namespace, _struct, _field, index))
            output = a->string;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getAttributeIsNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto a = getAttribute(_namespace, _struct, _field, index))
            output = a->isNumber;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getAttributeNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        double output = 0.0;
        if (auto a = getAttribute(_namespace, _struct, _field, index))
            output = a->number;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getStructMethodName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto m = getMethod(_namespace, _struct, index))
            output = m->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodReturnType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        std::string output = "";
        if (auto m = getMethod(_namespace, _struct, _method))
            output = m->returnType;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodIsStatic(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getMethod(_namespace, _struct, _method))
            output = m->isStatic;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructMethodParameterName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto p = getParameter(_namespace, _struct, _method, index))
            output = p->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodParameterType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto p = getParameter(_namespace, _struct, _method, index))
            output = p->type;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodParameterConstant(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto p = getParameter(_namespace, _struct, _method, index))
            output = p->constant;

        wrenSetSlotBool(vm, 0, output);
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

    std::optional<Struct> ContextHelper::getStruct(const std::string& _namespace, const std::string& _struct)
    {
        if (auto n = getNamespace(_namespace))
        {
            for (const auto& s : n->structs)
            {
                if (s.name == _struct)
                    return s;
            }
        }

        return {};
    }

    std::optional<Struct> ContextHelper::getStruct(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->structs.size() > index)
                return n->structs[index];
        }

        return {};
    }

    std::optional<Field> ContextHelper::getField(const std::string& _namespace, const std::string& _struct, const std::string& _field)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            for (const auto& f : s->fields)
            {
                if (f.name == _field)
                    return f;
            }
        }

        return {};
    }

    std::optional<Field> ContextHelper::getField(const std::string& _namespace, const std::string& _struct, size_t index)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            if (s->fields.size() > index)
                return s->fields[index];
        }

        return {};
    }

    std::optional<Attribute> ContextHelper::getAttribute(const std::string& _namespace, const std::string& _struct, const std::string& _field, size_t index)
    {
        if (auto f = getField(_namespace, _struct, _field))
        {
            if (f->attributes.size() > index)
                return f->attributes[index];
        }

        return {};
    }

    std::optional<Method> ContextHelper::getMethod(const std::string& _namespace, const std::string& _struct, const std::string& _method)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            for (const auto& m : s->methods)
            {
                if (m.name == _method)
                    return m;
            }
        }

        return {};
    }

    std::optional<Method> ContextHelper::getMethod(const std::string& _namespace, const std::string& _struct, size_t index)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            if (s->methods.size() > index)
                return s->methods[index];
        }

        return {};
    }

    std::optional<Parameter> ContextHelper::getParameter(const std::string& _namespace, const std::string& _struct, const std::string& _method, size_t index)
    {
        if (auto m = getMethod(_namespace, _struct, _method))
        {
            if (m->parameters.size() > index)
                return m->parameters[index];
        }

        return {};
    }
};
