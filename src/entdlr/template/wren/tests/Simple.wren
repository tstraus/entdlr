import "Context" for Context

var c = Context.get()

for (nKey in c.namespaces.keys) {
    var n = c.namespaces[nKey]
    System.print(n.name)

    for (eKey in n.enums.keys) {
        var e = n.enums[eKey]
        System.print("    " + e.name + " : enum (" + e.type + ")")

        for (vKey in e.values.keys) {
            var v = e.values[vKey]
            System.print("        " + v.name + " = " + v.value.toString)
        }
    }

    for (uKey in n.unions.keys) {
        var u = n.unions[uKey]
        System.print("    " + u.name + " : union")

        for (tKey in u.types.keys) {
            var t = u.types[tKey]
            System.write("        " + t.name)
            if (t.isArray) {
                System.write("[")
                if (t.arraySize > 0) {
                    System.write(t.arraySize.toString)
                }
                System.write("]")
            }
            System.print()
        }
    }

    for (sKey in n.structs.keys) {
        var s = n.structs[sKey]
        System.print("    " + s.name + " : struct")

        for (fKey in s.fields.keys) {
            var f = s.fields[fKey]
            System.write("        " + f.name + " : " + f.type)
            if (f.isArray) {
                System.write("[")
                if (f.arraySize > 0) {
                    System.write(f.arraySize.toString)
                }
                System.write("]")
            }
            System.print()

            for (aKey in f.attributes.keys) {
                var a = f.attributes[aKey]
                System.write("            " + a.name + " : ")
                if (a.isString) {
                    System.write(a.string)
                }
                if (a.isNumber) {
                    System.write(a.number)
                }
                System.print()
            }
        }
    }
}

