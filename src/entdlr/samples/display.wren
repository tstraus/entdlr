import "Context" for Context

var c = Context.get()

for (nKey in c.namespaces.keys) {
    var n = c.namespaces[nKey]
    System.print(n.name)

    for (eKey in n.enums.keys) {
        var e = n.enums[eKey]
        System.write("    " + e.name + " : enum (" + e.type + ")")

        if (e.attributes.count > 0) {
            System.write(" {")
            for (atKey in e.attributes.keys) {
                var attr = e.attributes[atKey]
                System.write(" " + attr.name)
                if (attr.isString) {
                    System.write(":" + attr.string)
                }
                if (attr.isNumber) {
                    System.write(":" + attr.number.toString)
                }
            }
            System.write(" }")
        }
        System.print()

        for (vKey in e.values.keys) {
            var v = e.values[vKey]
            System.print("        " + v.name + " = " + v.value.toString)
        }
    }

    for (uKey in n.unions.keys) {
        var u = n.unions[uKey]
        System.write("    " + u.name + " : union")

        if (u.attributes.count > 0) {
            System.write(" {")
            for (atKey in u.attributes.keys) {
                var attr = u.attributes[atKey]
                System.write(" " + attr.name)
                if (attr.isString) {
                    System.write(":" + attr.string)
                }
                if (attr.isNumber) {
                    System.write(":" + attr.number.toString)
                }
            }
            System.write(" }")
        }
        System.print()

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
        System.write("    " + s.name + " : struct")

        if (s.attributes.count > 0) {
            System.write(" {")
            for (atKey in s.attributes.keys) {
                var attr = s.attributes[atKey]
                System.write(" " + attr.name)
                if (attr.isString) {
                    System.write(":" + attr.string)
                }
                if (attr.isNumber) {
                    System.write(":" + attr.number.toString)
                }
            }
            System.write(" }")
        }
        System.print()

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

        for (mKey in s.methods.keys) {
            var m = s.methods[mKey]
            System.write("        ")
            if (m.isStatic) {
                System.write("static ")
            }
            System.print(m.name + " : " + m.returnType)

            for (pKey in m.parameters.keys) {
                var p = m.parameters[pKey]
                System.write("            " + p.name + " : ")
                if (!p.constant) {
                    System.write("mutable ")
                }
                System.print(p.type)
            }
        }
    }

    for (fKey in n.facilities.keys) {
        var f = n.facilities[fKey]
        System.print("    " + f.name + " : facility")

        for (mKey in f.methods.keys) {
            var m = f.methods[mKey]
            System.write("        ")
            if (m.isStatic) {
                System.write("static ")
            }
            System.print(m.name + " : " + m.returnType)
            for (pKey in m.parameters.keys) {
                var p = m.parameters[pKey]
                System.write("            " + p.name + " : ")
                if (!p.constant) {
                    System.write("mutable ")
                }
                System.print(p.type)
            }
        }
    }
}

