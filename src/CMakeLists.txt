set (CMAKE_DEBUG_POSTFIX d)
set (CMAKE_RELWITHDEBINFO_POSTFIX rd)
set (CMAKE_MINSIZEREL_POSTFIX rm)

# option to disable building py_entdlr module

add_subdirectory (external)

enable_testing ()
add_subdirectory (entdlr)
