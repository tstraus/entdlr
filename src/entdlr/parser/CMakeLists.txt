project (entdlr_parser)

add_subdirectory (grammar/generated)

set (HEADERS
    parser.h
)

set (SOURCE
    parser.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::parser ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::context
    PUBLIC entdlr::flatbuffer_parser
    PUBLIC entdlr::javadoc_parser
)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_libraries (${PROJECT_NAME}
        PUBLIC stdc++fs
    )
endif ()

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/parser)

add_subdirectory (tests)

