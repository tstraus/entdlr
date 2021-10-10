set (SAMPLES
    ./entity.fbs
    ./measurements.fbs
    ./time_interface.fbs
    ./flatbench.fbs
    ./greeter.fbs
    ./monster.fbs
    ./monster2.fbs
    ./namespace_test1.fbs
    ./namespace_test2.fbs
    ./resultinfo.fbs
    ./saveschema.fbs
    ./service.fbs

    ./display.tmpl
    ./c.tmpl
    ./cpp.tmpl

    ./c.json
    ./cpp.json

    ./Functions.json
    ./Functions.wren
)

install (FILES ${SAMPLES} DESTINATION samples)
