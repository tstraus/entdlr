set (CMAKE_DEBUG_POSTFIX d)
set (CMAKE_RELWITHDEBINFO_POSTFIX rd)
set (CMAKE_MINSIZEREL_POSTFIX rm)

add_subdirectory (generated)
add_subdirectory (tests)

project (entdlr)

add_executable (${PROJECT_NAME} main.cpp)

target_link_libraries (${PROJECT_NAME}
    entdlr::parser
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)

