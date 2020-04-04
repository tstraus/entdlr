project (inja_template_tests)

set (SOURCE
    "inja_template_tests.cpp"
)

set (TEMPLATES
    "Functions.tmpl"
    "Functions.wren"
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::parser
    PUBLIC entdlr::template::inja
    PUBLIC doctest
)

install (TARGETS ${PROJECT_NAME} DESTINATION tests)
install (FILES ${TEMPLATES} DESTINATION tests)

# also copy test templates to where ctest runs the tests
foreach (TEMPLATE ${TEMPLATES})
    add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_LIST_DIR}/${TEMPLATE}
        ${CMAKE_CURRENT_BINARY_DIR}/${TEMPLATE}
        DEPENDS ${CMAKE_CURRENT_LIST_DIR}/${TEMPLATE}
    )
endforeach()

