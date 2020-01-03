set (SAMPLES
    ./flatbench.fbs
    ./greeter.fbs
    ./monster.fbs
    ./monster2.fbs
    ./namespace_test1.fbs
    ./namespace_test2.fbs
    ./resultinfo.fbs
    ./saveschema.fbs
    ./display.tmpl
)

install (FILES ${SAMPLES} DESTINATION samples)
