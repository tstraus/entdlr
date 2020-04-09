#ifndef __ENTDLR_WREN_CONTEXT_H__
#define __ENTDLR_WREN_CONTEXT_H__

const std::string contextSource = R"(
class Context {
    includes { _includes }
    namespaces { _namespaces }

    construct get() {
        _includes = {}
        _namespaces = {}

        for (i in 0...Context.numIncludes()) {
            var inc = Include.new(Context.getIncludeName(i))
            _includes[inc.name] = inc
        }

        for (i in 0...Context.numNamespaces()) {
            var n = Namespace.new(Context.getNamespaceName(i))
            _namespaces[n.name] = n
        }
    }

    // get sizes
    foreign static numIncludes()
    foreign static numNamespaces()
    foreign static numEnums(namespace)
    foreign static numEnumAttributes(namespace, enum)
    foreign static numEnumValues(namespace, enum)
    foreign static numUnions(namespace)
    foreign static numUnionAttributes(namespace, union)
    foreign static numUnionTypes(namespace, union)
    foreign static numStructs(namespace)
    foreign static numStructAttributes(namespace, struct)
    foreign static numFields(namespace, struct)
    foreign static numFieldAttributes(namespace, struct, field)
    foreign static numStructMethods(namespace, struct)
    foreign static numStructMethodParameters(namespace, struct, method)
    foreign static numInterfaces(namespace)
    foreign static numInterfaceMethods(namespace, interface)
    foreign static numInterfaceMethodParameters(namespace, interface, method)

    // Include
    foreign static getIncludeName(index)

    // Namespace
    foreign static getNamespaceName(index)

    // Enum
    foreign static getEnumName(namespace, index)
    foreign static getEnumType(namespace, enum)
    foreign static getEnumComment(namespace, enum)
    foreign static getEnumAttributeName(namespace, enum, index)
    foreign static getEnumAttributeIsString(namespace, enum, index)
    foreign static getEnumAttributeString(namespace, enum, index)
    foreign static getEnumAttributeIsNumber(namespace, enum, index)
    foreign static getEnumAttributeNumber(namespace, enum, index)
    // EnumValue
    foreign static getEnumValueName(namespace, enum, index)
    foreign static getEnumValueValue(namespace, enum, index)

    // Union
    foreign static getUnionName(namespace, index)
    foreign static getUnionComment(namespace, union)
    foreign static getUnionAttributeName(namespace, union, index)
    foreign static getUnionAttributeIsString(namespace, union, index)
    foreign static getUnionAttributeString(namespace, union, index)
    foreign static getUnionAttributeIsNumber(namespace, union, index)
    foreign static getUnionAttributeNumber(namespace, union, index)
    // UnionType
    foreign static getUnionTypeName(namespace, union, index)
    foreign static getUnionTypeIsArray(namespace, union, index)
    foreign static getUnionTypeArraySize(namespace, union, index)

    // Struct
    foreign static getStructName(namespace, index)
    foreign static getStructComment(namespace, struct)
    foreign static getStructAttributeName(namespace, struct, index)
    foreign static getStructAttributeIsString(namespace, struct, index)
    foreign static getStructAttributeString(namespace, struct, index)
    foreign static getStructAttributeIsNumber(namespace, struct, index)
    foreign static getStructAttributeNumber(namespace, struct, index)
    // Field
    foreign static getFieldName(namespace, struct, index)
    foreign static getFieldType(namespace, struct, index)
    foreign static getFieldIsArray(namespace, struct, index)
    foreign static getFieldArraySize(namespace, struct, index)
    foreign static getFieldComment(namespace, struct, index)
    // Attribute
    foreign static getFieldAttributeName(namespace, struct, field, index)
    foreign static getFieldAttributeIsString(namespace, struct, field, index)
    foreign static getFieldAttributeString(namespace, struct, field, index)
    foreign static getFieldAttributeIsNumber(namespace, struct, field, index)
    foreign static getFieldAttributeNumber(namespace, struct, field, index)
    // Method
    foreign static getStructMethodName(namespace, struct, index)
    foreign static getStructMethodReturnType(namespace, struct, method)
    foreign static getStructMethodIsStatic(namespace, struct, method)
    foreign static getStructMethodComment(namespace, struct, method)
    // Parameter
    foreign static getStructMethodParameterName(namespace, struct, method, index)
    foreign static getStructMethodParameterType(namespace, struct, method, index)
    foreign static getStructMethodParameterConstant(namespace, struct, method, index)

    // Interface
    foreign static getInterfaceName(namespace, index)
    foreign static getInterfaceComment(namespace, interface)
    // Method
    foreign static getInterfaceMethodName(namespace, interface, index)
    foreign static getInterfaceMethodReturnType(namespace, interface, method)
    foreign static getInterfaceMethodIsStatic(namespace, interface, method)
    foreign static getInterfaceMethodComment(namespace, interface, method)
    // Parameter
    foreign static getInterfaceMethodParameterName(namespace, interface, method, index)
    foreign static getInterfaceMethodParameterType(namespace, interface, method, index)
    foreign static getInterfaceMethodParameterConstant(namespace, interface, method, index)
}

class Include {
    name { _name }

    construct new(inc) {
        _name = inc
    }
}

class Namespace {
    name { _name }
    enums { _enums }
    unions { _unions }
    structs { _structs }
    interfaces { _interfaces }

    construct new(namespace) {
        _name = namespace
        _enums = {}
        _unions = {}
        _structs = {}
        _interfaces = {}

        for (i in 0...Context.numEnums(namespace)) {
            var e = Enum.new(namespace, Context.getEnumName(namespace, i))
            _enums[e.name] = e
        }

        for (i in 0...Context.numUnions(namespace)) {
            var u = Union.new(namespace, Context.getUnionName(namespace, i))
            _unions[u.name] = u
        }

        for (i in 0...Context.numStructs(namespace)) {
            var s = Struct.new(namespace, Context.getStructName(namespace, i))
            _structs[s.name] = s
        }

        for (i in 0...Context.numInterfaces(namespace)) {
            var f = Interface.new(namespace, Context.getInterfaceName(namespace, i))
            _interfaces[f.name] = f
        }
    }
}

class Enum {
    name { _name }
    type { _type }
    values { _values }
    attributes { _attributes }
    comment { _comment }

    construct new(namespace, enum) {
        _name = enum
        _values = {}
        _type = Context.getEnumType(namespace, enum)
        _comment = Context.getEnumComment(namespace, enum)
        _attributes = {}

        for (i in 0...Context.numEnumAttributes(namespace, enum)) {
            var a = Attribute.newEnumAttribute(namespace, enum, i)
            _attributes[a.name] = a
        }

        for (i in 0...Context.numEnumValues(namespace, enum)) {
            var v = EnumValue.new(namespace, enum, i)
            _values[v.name] = v
        }
    }
}

class EnumValue {
    name { _name }
    value { _value }

    construct new(namespace, enum, index) {
        _name = Context.getEnumValueName(namespace, enum, index)
        _value = Context.getEnumValueValue(namespace, enum, index)
    }
}

class Union {
    name { _name }
    types { _types }
    attributes { _attributes }
    comment { _comment }

    construct new(namespace, union) {
        _name = union
        _comment = Context.getUnionComment(namespace, union)
        _types = {}
        _attributes = {}

        for (i in 0...Context.numUnionAttributes(namespace, union)) {
            var a = Attribute.newUnionAttribute(namespace, union, i)
            _attributes[a.name] = a
        }
        
        for (i in 0...Context.numUnionTypes(namespace, union)) {
            var u = UnionType.new(namespace, union, i)
            _types[u.name] = u
        }
    }
}

class UnionType {
    name { _name }
    isArray { _isArray }
    arraySize { _arraySize }

    construct new(namespace, union, index) {
        _name = Context.getUnionTypeName(namespace, union, index)
        _isArray = Context.getUnionTypeIsArray(namespace, union, index)
        _arraySize = Context.getUnionTypeArraySize(namespace, union, index)
    }
}

class Struct {
    name { _name }
    fields { _fields }
    methods { _methods }
    attributes { _attributes }
    comment { _comment }

    construct new(namespace, struct) {
        _name = struct
        _comment = Context.getStructComment(namespace, struct)
        _fields = {}
        _methods = {}
        _attributes = {}

        for (i in 0...Context.numStructAttributes(namespace, struct)) {
            var a = Attribute.newStructAttribute(namespace, struct, i)
            _attributes[a.name] = a
        }

        for (i in 0...Context.numFields(namespace, struct)) {
            var f = Field.new(namespace, struct, i)
            _fields[f.name] = f
        }

        for (i in 0...Context.numStructMethods(namespace, struct)) {
            var m = Method.newStructMethod(namespace, struct, Context.getStructMethodName(namespace, struct, i))
            _methods[m.name] = m
        }
    }
}

class Field {
    name { _name }
    type { _type }
    isArray { _isArray }
    arraySize { _arraySize }
    attributes { _attributes }
    comment { _comment }

    construct new(namespace, struct, index) {
        _name = Context.getFieldName(namespace, struct, index)
        _type = Context.getFieldType(namespace, struct, index)
        _isArray = Context.getFieldIsArray(namespace, struct, index)
        _arraySize = Context.getFieldArraySize(namespace, struct, index)
        _comment = Context.getFieldComment(namespace, struct, index)
        _attributes = {}

        for (i in 0...Context.numFieldAttributes(namespace, struct, _name)) {
            var a = Attribute.newFieldAttribute(namespace, struct, _name, i)
            _attributes[a.name] = a
        }
    }
}

class Attribute {
    name { _name }
    isString { _isString }
    string { _string }
    isNumber { _isNumber }
    number { _number }

    construct newEnumAttribute(namespace, enum, index) {
        _name = Context.getEnumAttributeName(namespace, enum, index)
        _isString = Context.getEnumAttributeIsString(namespace, enum, index)
        _string = Context.getEnumAttributeString(namespace, enum, index)
        _isNumber = Context.getEnumAttributeIsNumber(namespace, enum, index)
        _number = Context.getEnumAttributeNumber(namespace, enum, index)
    }

    construct newUnionAttribute(namespace, union, index) {
        _name = Context.getUnionAttributeName(namespace, union, index)
        _isString = Context.getUnionAttributeIsString(namespace, union, index)
        _string = Context.getUnionAttributeString(namespace, union, index)
        _isNumber = Context.getUnionAttributeIsNumber(namespace, union, index)
        _number = Context.getUnionAttributeNumber(namespace, union, index)
    }

    construct newStructAttribute(namespace, struct, index) {
        _name = Context.getStructAttributeName(namespace, struct, index)
        _isString = Context.getStructAttributeIsString(namespace, struct, index)
        _string = Context.getStructAttributeString(namespace, struct, index)
        _isNumber = Context.getStructAttributeIsNumber(namespace, struct, index)
        _number = Context.getStructAttributeNumber(namespace, struct, index)
    }

    construct newFieldAttribute(namespace, struct, field, index) {
        _name = Context.getFieldAttributeName(namespace, struct, field, index)
        _isString = Context.getFieldAttributeIsString(namespace, struct, field, index)
        _string = Context.getFieldAttributeString(namespace, struct, field, index)
        _isNumber = Context.getFieldAttributeIsNumber(namespace, struct, field, index)
        _number = Context.getFieldAttributeNumber(namespace, struct, field, index)
    }
}

class Method {
    name { _name }
    returnType { _returnType }
    parameters { _parameters }
    isStatic { _isStatic }
    comment { _comment }

    construct newStructMethod(namespace, struct, method) {
        _name = method
        _returnType = Context.getStructMethodReturnType(namespace, struct, method)
        _isStatic = Context.getStructMethodIsStatic(namespace, struct, method)
        _comment = Context.getStructMethodComment(namespace, struct, method)
        _parameters = {}

        for (i in 0...Context.numStructMethodParameters(namespace, struct, method)) {
            var p = Parameter.newStructMethodParameter(namespace, struct, method, i)
            _parameters[p.name] = p
        }
    }

    construct newInerfaceMethod(namespace, interface, method) {
        _name = method
        _returnType = Context.getInterfaceMethodReturnType(namespace, interface, method)
        _isStatic = Context.getInterfaceMethodIsStatic(namespace, interface, method)
        _comment = Context.getInterfaceMethodComment(namespace, interface, method)
        _parameters = {}

        for (i in 0...Context.numInterfaceMethodParameters(namespace, interface, method)) {
            var p = Parameter.newInterfaceMethodParameter(namespace, interface, method, i)
            _parameters[p.name] = p
        }
    }
}

class Parameter {
    name { _name }
    type { _type }
    constant { _constant }

    construct newStructMethodParameter(namespace, struct, method, index) {
        _name = Context.getStructMethodParameterName(namespace, struct, method, index)
        _type = Context.getStructMethodParameterType(namespace, struct, method, index)
        _constant = Context.getStructMethodParameterConstant(namespace, struct, method, index)
    }

    construct newInterfaceMethodParameter(namespace, interface, method, index) {
        _name = Context.getInterfaceMethodParameterName(namespace, interface, method, index)
        _type = Context.getInterfaceMethodParameterType(namespace, interface, method, index)
        _constant = Context.getInterfaceMethodParameterConstant(namespace, interface, method, index)
    }
}

class Interface {
    name { _name }
    methods { _methods }
    comment { _comment }

    construct new(namespace, interface) {
        _name = interface
        _comment = Context.getInterfaceComment(namespace, interface)
        _methods = {}

        for (i in 0...Context.numInterfaceMethods(namespace, interface)) {
            var m = Method.newInterfaceMethod(namespace, interface, Context.getInterfaceMethodName(namespace, interface, i))
            _methods[m.name] = m
        }
    }
}
)";

#endif // __ENTDLR_WREN_CONTEXT_H__
