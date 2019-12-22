project (entdlr_tests)

set (SOURCE
    "entdlr_tests.cpp"
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    gtest
    gtest_main
    entdlr::parser
)

install (TARGETS ${PROJECT_NAME} DESTINATION tests)
