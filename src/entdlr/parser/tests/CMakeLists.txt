project (parser_tests)

set (SOURCE
    "parser_tests.cpp"
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    entdlr::parser
    doctest
)

install (TARGETS ${PROJECT_NAME} DESTINATION tests)
