project (entdlr_tests)

add_subdirectory (samples)

set (SOURCE
    "entdlr_tests.cpp"
    "lest.hpp"
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    entdlr::fbs_parser
)

install (TARGETS ${PROJECT_NAME} DESTINATION tests)
