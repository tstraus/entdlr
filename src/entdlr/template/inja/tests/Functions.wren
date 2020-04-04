class Functions {
    static do_something(what) {
        return "I did the thing -> " + what
    }

    static do_more_things(line, column) {
        return "ERROR: (" + line.toString + ", " + column.toString + ")"
    }
}
