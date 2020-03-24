class Context {
    _namespaces = { }
    namespaces { _namespaces }

    construct get() {
        for (i in 0..._numNamespaces()) {
            var n = Namespace.new(_getNamespaceName(i)))
            _namespaces[n.name()] = n
            
            System.print(n.name())
        }
    }

    // get sizes
    foreign static _numNamespaces()
    foreign static _numEnums(namespace)
    foreign static _numEnumValues(namespace, enum)
    foreign static _numUnions(namespace)
    foreign static _numUnionTypes(namespace, union)

    // Namespace
    foreign static _getNamespaceName(index)

    // Enum
    foreign static _getEnumName(namespace, index)
    foreign static _getEnumType(namespace, index)
    // EnumValue
    foreign static _getEnumValueName(namespace, enum, index)
    foreign static _getEnumValueValue(namespace, enum, index)

    // Union
    foreign static _getUnionName(namespace, index)
    // UnionType
    foreign static _getUnionTypeName(namespace, union, index)
    foreign static _getUnionTypeIsArray(namespace, union, index)
    foreign static _getUnionTypeArraySize(namespace, union, index)
}

class Namespace {
    _name = ""
    name { _name }

    _enums = { }
    enums { _enums }

    _unions = { }
    unions { _unions }

    _structs = { }
    structs { _structs }

    _facilities = { }
    facilities { _facilities }

    construct new(namespace) {
        _name = namespace

        for (i in 0...Context._numEnums(namespace)) {
            var e = Enum.new(namespace, _getEnumName(namespace, i))
            _enums[e.name()] = e

            System.print(e.name())
        }

        for (i in 0...Context._numUnions(namespace)) {
            var u = Union.new(namespace, _getUnionName(namespace, i))
            _unions[u.name()] = u

            System.print(u.name())
        }
    }
}

class Enum {
    _name = ""
    name { _name }

    _type = ""
    type { _type }

    _values = { }
    values { _values }

    construct new(namespace, enum) {
        _name = enum

        _type = Context._getEnumType(namespace, enum)

        for (i in 0...Context._numEnumValues(namespace, enum)) {
            var v = EnumValue.new(namespace, enum, i)
            _values[v.name()] = v

            System.print(v.name())
        }
    }
}

class EnumValue {
    _name = ""
    name { _name }

    _value = 0
    values { _value }

    construct new(namespace, enum, index) {
        _name = Context._getEnumValueName(namespace, enum, index)
        _value = Context._getEnumValueValue(namespace, enum, index)
    }
}

class Union {
    _name = ""
    name { _name }

    _types = { }
    types { _types }

    construct new(namespaces, union) {
        _name = union
        
        for (i in 0...Context._numUnionTypes(namespace, union)) {
            var u = UnionType.new(namespace, union, i)
            _types[u.name()] = u

            System.print(u.name())
        }
    }
}

class UnionType {
    _name = ""
    name { _name }

    _isArray = false
    isArray = { _isArray }

    _arraySize = 0
    arraySize { _arraySize }

    construct new(namespace, union, index) {
        _name = Context._getUnionTypeName(namespace, union, index)
        _isArray = Context._getUnionTypeIsArray(namespace, union, index)
        _arraySize = Context._getUnionTypeArraySize(namespace, union, index)
    }
}

