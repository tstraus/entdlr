#include "context_helper.h"

#include <iostream>
using std::cout; using std::endl;
using nonstd::optional;

namespace Entdlr
{
    Context context;

    void ContextHelper::setContext(const Context& c)
    {
        context = c;
    }

    void ContextHelper::numIncludes(WrenVM* vm)
    {
        wrenSetSlotDouble(vm, 0, (double)context.includes.size());
    }

    void ContextHelper::numNamespaces(WrenVM* vm)
    {
        wrenSetSlotDouble(vm, 0, (double)context.namespaces.size());
    }

    void ContextHelper::numEnums(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->enums.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numEnumValues(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto e = getEnum(_namespace, _enum))
            output = e->values.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numUnions(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->unions.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numUnionTypes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto u = getUnion(_namespace, _union))
            output = u->types.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numStructs(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->structs.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numFields(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto s = getStruct(_namespace, _struct))
            output = s->fields.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numEnumAttributes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto e = getEnum(_namespace, _enum))
            output = e->attributes.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numUnionAttributes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto u = getUnion(_namespace, _union))
            output = u->attributes.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numStructAttributes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto s = getStruct(_namespace, _struct))
            output = s->attributes.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numFieldAttributes(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);

        size_t output = 0;
        if (auto f = getField(_namespace, _struct, _field))
            output = f->attributes.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numStructMethods(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto s = getStruct(_namespace, _struct))
            output = s->methods.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numStructMethodParameters(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        size_t output = 0;
        if (auto m = getStructMethod(_namespace, _struct, _method))
            output = m->parameters.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numInterfaces(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);

        size_t output = 0;
        if (auto n = getNamespace(_namespace))
            output = n->interfaces.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numInterfaceMethods(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);

        size_t output = 0;
        if (auto f = getInterface(_namespace, _interface))
            output = f->methods.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::numInterfaceMethodParameters(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        size_t output = 0;
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
            output = m->parameters.size();

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::getIncludeName(WrenVM* vm)
    {
        size_t index = (size_t)wrenGetSlotDouble(vm, 1);

        std::string output = "";
        if (context.includes.size() > index)
            output = context.includes[index].name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getNamespaceName(WrenVM* vm)
    {
        size_t index = (size_t)wrenGetSlotDouble(vm, 1);

        std::string output = "";
        if (context.namespaces.size() > index)
            output = context.namespaces[index].name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = (size_t)wrenGetSlotDouble(vm, 2);

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

    void ContextHelper::getEnumComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);

        std::string output = "";
        if (auto e = getEnum(_namespace, _enum))
            output = e->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumAttributeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto a = getEnumAttribute(_namespace, _enum, index))
            output = a->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumAttributeIsString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto a = getEnumAttribute(_namespace, _enum, index))
            output = a->isString;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getEnumAttributeString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto a = getEnumAttribute(_namespace, _enum, index))
            output = a->string;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumAttributeIsNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto a = getEnumAttribute(_namespace, _enum, index))
            output = a->isNumber;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getEnumAttributeNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        double output = 0.0;
        if (auto a = getEnumAttribute(_namespace, _enum, index))
            output = a->number;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getEnumValueName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto v = getEnumValue(_namespace, _enum, index))
            output = v->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getEnumValueValue(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _enum = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        int64_t output = 0;
        if (auto v = getEnumValue(_namespace, _enum, index))
            output = v->value;

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::getUnionName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = (size_t)wrenGetSlotDouble(vm, 2);

        std::string output = "";
        if (auto u = getUnion(_namespace, index))
            output = u->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);

        std::string output = "";
        if (auto u = getUnion(_namespace, _union))
            output = u->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionAttributeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto a = getUnionAttribute(_namespace, _union, index))
            output = a->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionAttributeIsString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto a = getUnionAttribute(_namespace, _union, index))
            output = a->isString;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getUnionAttributeString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto a = getUnionAttribute(_namespace, _union, index))
            output = a->string;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionAttributeIsNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto a = getUnionAttribute(_namespace, _union, index))
            output = a->isNumber;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getUnionAttributeNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        double output = 0.0;
        if (auto a = getUnionAttribute(_namespace, _union, index))
            output = a->number;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getUnionTypeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto t = getUnionType(_namespace, _union, index))
            output = t->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getUnionTypeIsArray(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto t = getUnionType(_namespace, _union, index))
            output = t->isArray;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getUnionTypeArraySize(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _union = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        size_t output = 0;
        if (auto t = getUnionType(_namespace, _union, index))
            output = t->arraySize;

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::getStructName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = (size_t)wrenGetSlotDouble(vm, 2);

        std::string output = "";
        if (auto s = getStruct(_namespace, index))
            output = s->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);

        std::string output = "";
        if (auto s = getStruct(_namespace, _struct))
            output = s->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructAttributeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto a = getStructAttribute(_namespace, _struct, index))
            output = a->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructAttributeIsString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto a = getStructAttribute(_namespace, _struct, index))
            output = a->isString;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructAttributeString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto a = getStructAttribute(_namespace, _struct, index))
            output = a->string;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructAttributeIsNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto a = getStructAttribute(_namespace, _struct, index))
            output = a->isNumber;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructAttributeNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        double output = 0.0;
        if (auto a = getStructAttribute(_namespace, _struct, index))
            output = a->number;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getFieldName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto f = getField(_namespace, _struct, index))
            output = f->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto f = getField(_namespace, _struct, index))
            output = f->type;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldIsArray(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        bool output = false;
        if (auto f = getField(_namespace, _struct, index))
            output = f->isArray;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getFieldArraySize(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        size_t output = 0;
        if (auto f = getField(_namespace, _struct, index))
            output = f->arraySize;

        wrenSetSlotDouble(vm, 0, (double)output);
    }

    void ContextHelper::getFieldComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto f = getField(_namespace, _struct, index))
            output = f->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldAttributeName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto a = getFieldAttribute(_namespace, _struct, _field, index))
            output = a->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldAttributeIsString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto a = getFieldAttribute(_namespace, _struct, _field, index))
            output = a->isString;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getFieldAttributeString(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto a = getFieldAttribute(_namespace, _struct, _field, index))
            output = a->string;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getFieldAttributeIsNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto a = getFieldAttribute(_namespace, _struct, _field, index))
            output = a->isNumber;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getFieldAttributeNumber(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _field = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        double output = 0.0;
        if (auto a = getFieldAttribute(_namespace, _struct, _field, index))
            output = a->number;

        wrenSetSlotDouble(vm, 0, output);
    }

    void ContextHelper::getStructMethodName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto m = getStructMethod(_namespace, _struct, index))
            output = m->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodReturnType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        std::string output = "";
        if (auto m = getStructMethod(_namespace, _struct, _method))
            output = m->returnType;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodReturnIsReference(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getStructMethod(_namespace, _struct, _method))
            output = m->returnIsReference;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructMethodIsStatic(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getStructMethod(_namespace, _struct, _method))
            output = m->isStatic;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructMethodConstant(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getStructMethod(_namespace, _struct, _method))
            output = m->constant;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructMethodComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        std::string output = "";
        if (auto m = getStructMethod(_namespace, _struct, _method))
            output = m->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodParameterName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto p = getStructParameter(_namespace, _struct, _method, index))
            output = p->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodParameterType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto p = getStructParameter(_namespace, _struct, _method, index))
            output = p->type;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getStructMethodParameterConstant(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto p = getStructParameter(_namespace, _struct, _method, index))
            output = p->constant;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getStructMethodParameterReference(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _struct = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto p = getStructParameter(_namespace, _struct, _method, index))
            output = p->reference;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getInterfaceName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        size_t index = (size_t)wrenGetSlotDouble(vm, 2);

        std::string output = "";
        if (auto f = getInterface(_namespace, index))
            output = f->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);

        std::string output = "";
        if (auto f = getInterface(_namespace, _interface))
            output = f->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceMethodName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        size_t index = (size_t)wrenGetSlotDouble(vm, 3);

        std::string output = "";
        if (auto m = getInterfaceMethod(_namespace, _interface, index))
            output = m->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceMethodReturnType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        std::string output = "";
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
            output = m->returnType;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceMethodReturnIsReference(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
            output = m->returnIsReference;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getInterfaceMethodIsStatic(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
            output = m->isStatic;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getInterfaceMethodConstant(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        bool output = false;
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
            output = m->constant;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getInterfaceMethodComment(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);

        std::string output = "";
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
            output = m->comment;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceMethodParameterName(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto p = getInterfaceParameter(_namespace, _interface, _method, index))
            output = p->name;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceMethodParameterType(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        std::string output = "";
        if (auto p = getInterfaceParameter(_namespace, _interface, _method, index))
            output = p->type;

        wrenSetSlotString(vm, 0, output.c_str());
    }

    void ContextHelper::getInterfaceMethodParameterConstant(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto p = getInterfaceParameter(_namespace, _interface, _method, index))
            output = p->constant;

        wrenSetSlotBool(vm, 0, output);
    }

    void ContextHelper::getInterfaceMethodParameterReference(WrenVM* vm)
    {
        std::string _namespace = wrenGetSlotString(vm, 1);
        std::string _interface = wrenGetSlotString(vm, 2);
        std::string _method = wrenGetSlotString(vm, 3);
        size_t index = (size_t)wrenGetSlotDouble(vm, 4);

        bool output = false;
        if (auto p = getInterfaceParameter(_namespace, _interface, _method, index))
            output = p->reference;

        wrenSetSlotBool(vm, 0, output);
    }

    optional<Include> ContextHelper::getInclude(const std::string& _include)
    {
        for (const auto& i : context.includes)
        {
            if (i.name == _include)
                return i;
        }

        return {};
    }

    optional<Namespace> ContextHelper::getNamespace(const std::string& _namespace)
    {
        for (const auto& n : context.namespaces)
        {
            if (n.name == _namespace)
                return n;
        }

        return {};
    }

    optional<Enum> ContextHelper::getEnum(const std::string& _namespace, const std::string& _enum)
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

    optional<Enum> ContextHelper::getEnum(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->enums.size() > index)
                return n->enums[index];
        }

        return {};
    }

    optional<EnumValue> ContextHelper::getEnumValue(const std::string& _namespace, const std::string& _enum, size_t index)
    {
        if (auto e = getEnum(_namespace, _enum))
        {
            if (e->values.size() > index)
                return e->values[index];
        }

        return {};
    }

    optional<Union> ContextHelper::getUnion(const std::string& _namespace, const std::string& _union)
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

    optional<Union> ContextHelper::getUnion(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->unions.size() > index)
                return n->unions[index];
        }

        return {};
    }

    optional<UnionType> ContextHelper::getUnionType(const std::string& _namespace, const std::string& _union, size_t index)
    {
        if (auto u = getUnion(_namespace, _union))
        {
            if (u->types.size() > index)
                return u->types[index];
        }

        return {};
    }

    optional<Struct> ContextHelper::getStruct(const std::string& _namespace, const std::string& _struct)
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

    optional<Struct> ContextHelper::getStruct(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->structs.size() > index)
                return n->structs[index];
        }

        return {};
    }

    optional<Field> ContextHelper::getField(const std::string& _namespace, const std::string& _struct, const std::string& _field)
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

    optional<Field> ContextHelper::getField(const std::string& _namespace, const std::string& _struct, size_t index)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            if (s->fields.size() > index)
                return s->fields[index];
        }

        return {};
    }

    optional<Attribute> ContextHelper::getEnumAttribute(const std::string& _namespace, const std::string& _enum, size_t index)
    {
        if (auto e = getEnum(_namespace, _enum))
        {
            std::vector<Attribute> a;
            for (const auto& att : e->attributes)
                a.push_back(att.second);

            if (a.size() > index)
                return a[index];
        }

        return {};
    }

    optional<Attribute> ContextHelper::getUnionAttribute(const std::string& _namespace, const std::string& _union, size_t index)
    {
        if (auto u = getUnion(_namespace, _union))
        {
            std::vector<Attribute> a;
            for (const auto& att : u->attributes)
                a.push_back(att.second);

            if (a.size() > index)
                return a[index];
        }

        return {};
    }

    optional<Attribute> ContextHelper::getStructAttribute(const std::string& _namespace, const std::string& _struct, size_t index)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            std::vector<Attribute> a;
            for (const auto& att : s->attributes)
                a.push_back(att.second);

            if (a.size() > index)
                return a[index];
        }

        return {};
    }

    optional<Attribute> ContextHelper::getFieldAttribute(const std::string& _namespace, const std::string& _struct, const std::string& _field, size_t index)
    {
        if (auto f = getField(_namespace, _struct, _field))
        {
            std::vector<Attribute> a;
            for (const auto& att : f->attributes)
                a.push_back(att.second);

            if (a.size() > index)
                return a[index];
        }

        return {};
    }

    optional<Method> ContextHelper::getStructMethod(const std::string& _namespace, const std::string& _struct, const std::string& _method)
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

    optional<Method> ContextHelper::getStructMethod(const std::string& _namespace, const std::string& _struct, size_t index)
    {
        if (auto s = getStruct(_namespace, _struct))
        {
            if (s->methods.size() > index)
                return s->methods[index];
        }

        return {};
    }
    optional<Method> ContextHelper::getInterfaceMethod(const std::string& _namespace, const std::string& _interface, const std::string& _method)
    {
        if (auto f = getInterface(_namespace, _interface))
        {
            for (const auto& m : f->methods)
            {
                if (m.name == _method)
                    return m;
            }
        }

        return {};
    }

    optional<Method> ContextHelper::getInterfaceMethod(const std::string& _namespace, const std::string& _interface, size_t index)
    {
        if (auto f = getInterface(_namespace, _interface))
        {
            if (f->methods.size() > index)
                return f->methods[index];
        }

        return {};
    }

    optional<Parameter> ContextHelper::getStructParameter(const std::string& _namespace, const std::string& _struct, const std::string& _method, size_t index)
    {
        if (auto m = getStructMethod(_namespace, _struct, _method))
        {
            if (m->parameters.size() > index)
                return m->parameters[index];
        }

        return {};
    }

    optional<Parameter> ContextHelper::getInterfaceParameter(const std::string& _namespace, const std::string& _interface, const std::string& _method, size_t index)
    {
        if (auto m = getInterfaceMethod(_namespace, _interface, _method))
        {
            if (m->parameters.size() > index)
                return m->parameters[index];
        }

        return {};
    }

    optional<Interface> ContextHelper::getInterface(const std::string& _namespace, const std::string& _interface)
    {
        if (auto n = getNamespace(_namespace))
        {
            for (const auto& f : n->interfaces)
            {
                if (f.name == _interface)
                    return f;
            }
        }

        return {};
    }

    optional<Interface> ContextHelper::getInterface(const std::string& _namespace, size_t index)
    {
        if (auto n = getNamespace(_namespace))
        {
            if (n->interfaces.size() > index)
                return n->interfaces[index];
        }

        return {};
    }
};
