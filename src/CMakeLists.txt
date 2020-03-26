set (CMAKE_DEBUG_POSTFIX d)
set (CMAKE_RELWITHDEBINFO_POSTFIX rd)
set (CMAKE_MINSIZEREL_POSTFIX rm)

add_subdirectory (external)

enable_testing ()
add_subdirectory (entdlr)
