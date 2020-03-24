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

# also copy test scripts to where ctest runs the tests
foreach (SCRIPT ${SCRIPTS})
    add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_LIST_DIR}/${SCRIPT}
        ${CMAKE_CURRENT_BINARY_DIR}/${SCRIPT}
        DEPENDS ${CMAKE_CURRENT_LIST_DIR}/${SCRIPT}
    )
endforeach()

