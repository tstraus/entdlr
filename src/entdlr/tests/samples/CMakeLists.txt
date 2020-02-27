set (SAMPLES
    ./entity.fbs
    ./time_facility.fbs
    ./flatbench.fbs
    ./greeter.fbs
    ./monster.fbs
    ./monster2.fbs
    ./namespace_test1.fbs
    ./namespace_test2.fbs
    ./resultinfo.fbs
    ./saveschema.fbs

    ./display.tmpl
    ./c.tmpl
    ./cpp.tmpl

    ./c_mapping.json
    ./cpp_mapping.json
)

install (FILES ${SAMPLES} DESTINATION samples)
