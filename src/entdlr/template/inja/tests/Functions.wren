import "Module" for TestModule

class Functions {
    static do_something(what) {
        var result = TestModule.log("inside module")

        return "I did the thing " + result + " -> " + what
    }

    static do_more_things(line, column) {
        return "ERROR: (" + line.toString + ", " + column.toString + ")"
    }
}
