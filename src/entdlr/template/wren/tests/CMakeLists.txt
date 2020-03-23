project (wren_template_tests)

set (SOURCE
    "wren_template_tests.cpp"
)

set (SCRIPTS
    "Test.wren"
    "Simple.wren"
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    entdlr::template::wren
    doctest
)

install (TARGETS ${PROJECT_NAME} DESTINATION tests)
install (FILES ${SCRIPTS} DESTINATION tests)
