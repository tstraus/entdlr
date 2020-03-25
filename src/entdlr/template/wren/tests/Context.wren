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
    }
}

class Enum {
    name { _name }
    type { _type }
    values { _values }

    construct new(namespace, enum) {
        _name = enum
        _type = ""
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
