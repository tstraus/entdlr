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
                System.write("[" + t.arraySize.toString + "]")
            }
            System.print()
        }
    }
}

