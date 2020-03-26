#ifndef __ENTDLR_WREN_CONTEXT_H__
#define __ENTDLR_WREN_CONTEXT_H__

const std::string contextSource = R"(
class Context {
    namespaces { _namespaces }

    construct get() {
        _namespaces = {}

        for (i in 0...Context.numNamespaces()) {
            var n = Namespace.new(Context.getNamespaceName(i))
            _namespaces[n.name] = n
        }
    }

    // get sizes
    foreign static numNamespaces()
    foreign static numEnums(namespace)
    foreign static numEnumValues(namespace, enum)
    foreign static numUnions(namespace)
    foreign static numUnionTypes(namespace, union)
    foreign static numStructs(namespace)
    foreign static numFields(namespace, struct)
    foreign static numAttributes(namespace, struct, field)
    foreign static numStructMethods(namespace, struct)
    foreign static numStructMethodParameters(namespace, struct, method)
    foreign static numFacilities(namespace)
    foreign static numFacilityMethods(namespace, facility)
    foreign static numFacilityMethodParameters(namespace, facility, method)

    // Namespace
    foreign static getNamespaceName(index)

    // Enum
    foreign static getEnumName(namespace, index)
    foreign static getEnumType(namespace, index)
    // EnumValue
    foreign static getEnumValueName(namespace, enum, index)
    foreign static getEnumValueValue(namespace, enum, index)

    // Union
    foreign static getUnionName(namespace, index)
    // UnionType
    foreign static getUnionTypeName(namespace, union, index)
    foreign static getUnionTypeIsArray(namespace, union, index)
    foreign static getUnionTypeArraySize(namespace, union, index)

    // Struct
    foreign static getStructName(namespace, index)
    // Field
    foreign static getFieldName(namespace, struct, index)
    foreign static getFieldType(namespace, struct, index)
    foreign static getFieldIsArray(namespace, struct, index)
    foreign static getFieldArraySize(namespace, struct, index)
    // Attribute
    foreign static getAttributeName(namespace, struct, field, index)
    foreign static getAttributeIsString(namespace, struct, field, index)
    foreign static getAttributeString(namespace, struct, field, index)
    foreign static getAttributeIsNumber(namespace, struct, field, index)
    foreign static getAttributeNumber(namespace, struct, field, index)
    // Method
    foreign static getStructMethodName(namespace, struct, index)
    foreign static getStructMethodReturnType(namespace, struct, method)
    foreign static getStructMethodIsStatic(namespace, struct, method)
    // Parameter
    foreign static getStructMethodParameterName(namespace, struct, method, index)
    foreign static getStructMethodParameterType(namespace, struct, method, index)
    foreign static getStructMethodParameterConstant(namespace, struct, method, index)

    // Facility
    foreign static getFacilityName(namespace, index)
    // Method
    foreign static getFacilityMethodName(namespace, facility, index)
    foreign static getFacilityMethodReturnType(namespace, facility, method)
    foreign static getFacilityMethodIsStatic(namespace, facility, method)
    // Parameter
    foreign static getFacilityMethodParameterName(namespace, facility, method, index)
    foreign static getFacilityMethodParameterType(namespace, facility, method, index)
    foreign static getFacilityMethodParameterConstant(namespace, facility, method, index)
}

class Namespace {
    name { _name }
    enums { _enums }
    unions { _unions }
    structs { _structs }
    facilities { _facilities }

    construct new(namespace) {
        _name = namespace
        _enums = {}
        _unions = {}
        _structs = {}
        _facilities = {}

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

        for (i in 0...Context.numFacilities(namespace)) {
            var f = Facility.new(namespace, Context.getFacilityName(namespace, i))
            _facilities[f.name] = f
        }
    }
}

class Enum {
    name { _name }
    type { _type }
    values { _values }

    construct new(namespace, enum) {
        _name = enum
        _values = {}
        _type = Context.getEnumType(namespace, enum)

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

    construct new(namespace, union) {
        _name = union
        _types = {}
        
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

    construct new(namespace, struct) {
        _name = struct
        _fields = {}
        _methods = {}

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

    construct new(namespace, struct, index) {
        _name = Context.getFieldName(namespace, struct, index)
        _type = Context.getFieldType(namespace, struct, index)
        _isArray = Context.getFieldIsArray(namespace, struct, index)
        _arraySize = Context.getFieldArraySize(namespace, struct, index)
        _attributes = {}

        for (i in 0...Context.numAttributes(namespace, struct, _name)) {
            var a = Attribute.new(namespace, struct, _name, i)
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

    construct new(namespace, struct, field, index) {
        _name = Context.getAttributeName(namespace, struct, field, index)
        _isString = Context.getAttributeIsString(namespace, struct, field, index)
        _string = Context.getAttributeString(namespace, struct, field, index)
        _isNumber = Context.getAttributeIsNumber(namespace, struct, field, index)
        _number = Context.getAttributeNumber(namespace, struct, field, index)
    }
}

class Method {
    name { _name }
    returnType { _returnType }
    parameters { _parameters }
    isStatic { _isStatic }

    construct newStructMethod(namespace, struct, method) {
        _name = method
        _returnType = Context.getStructMethodReturnType(namespace, struct, method)
        _isStatic = Context.getStructMethodIsStatic(namespace, struct, method)
        _parameters = {}

        for (i in 0...Context.numStructMethodParameters(namespace, struct, method)) {
            var p = Parameter.newStructMethodParameter(namespace, struct, method, i)
            _parameters[p.name] = p
        }
    }

    construct newFacilityMethod(namespace, facility, method) {
        _name = method
        _returnType = Context.getFacilityMethodReturnType(namespace, facility, method)
        _isStatic = Context.getFacilityMethodIsStatic(namespace, facility, method)
        _parameters = {}

        for (i in 0...Context.numFacilityMethodParameters(namespace, facility, method)) {
            var p = Parameter.newFacilityMethodParameter(namespace, facility, method, i)
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

    construct newFacilityMethodParameter(namespace, facility, method, index) {
        _name = Context.getFacilityMethodParameterName(namespace, facility, method, index)
        _type = Context.getFacilityMethodParameterType(namespace, facility, method, index)
        _constant = Context.getFacilityMethodParameterConstant(namespace, facility, method, index)
    }
}

class Facility {
    name { _name }
    methods { _methods }

    construct new(namespace, facility) {
        _name = facility
        _methods = {}

        for (i in 0...Context.numFacilityMethods(namespace, facility)) {
            var m = Method.newFacilityMethod(namespace, facility, Context.getFacilityMethodName(namespace, facility, i))
            _methods[m.name] = m
        }
    }
}
)";

#endif // __ENTDLR_WREN_CONTEXT_H__