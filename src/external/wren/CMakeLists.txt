# build the wren VM static library (doesn't normally build with cmake')
project (wren)

set (HEADERS
    include/wren.h
    include/wren.hpp
    vm/wren_common.h
    vm/wren_compiler.h
    vm/wren_core.h
    vm/wren_debug.h
    vm/wren_opcodes.h
    vm/wren_primitive.h
    vm/wren_utils.h
    vm/wren_value.h
    vm/wren_vm.h
    optional/wren_opt_meta.h
    optional/wren_opt_random.h
)

set (SOURCE
    vm/wren_compiler.c
    vm/wren_core.c
    vm/wren_core.wren
    vm/wren_debug.c
    vm/wren_primitive.c
    vm/wren_utils.c
    vm/wren_value.c
    vm/wren_vm.c
    optional/wren_opt_meta.c
    optional/wren_opt_random.c
)

add_library (${PROJECT_NAME} STATIC ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC include
    PRIVATE vm
    PRIVATE optional
)

