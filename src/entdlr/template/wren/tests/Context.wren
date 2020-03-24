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

