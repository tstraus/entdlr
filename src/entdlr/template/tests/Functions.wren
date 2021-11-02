import "Module" for TestModule

var GlobalState = 0

class Functions {
    static do_something(what) {
        var result = TestModule.log("inside module")

        return "I did the thing " + result + " -> " + what
    }

    static do_more_things(line, column) {
        return "ERROR: (" + line.toString + ", " + column.toString + ")"
    }

    static increment_state() {
        GlobalState = GlobalState + 1
        return GlobalState
    }

    static no_return_value() {
        GlobalState = 0
    }
}
