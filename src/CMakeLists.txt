set (CMAKE_DEBUG_POSTFIX d)
set (CMAKE_RELWITHDEBINFO_POSTFIX rd)
set (CMAKE_MINSIZEREL_POSTFIX rm)

add_subdirectory (antlr_runtime)
add_subdirectory (inja)

enable_testing ()
add_subdirectory (entdlr)

