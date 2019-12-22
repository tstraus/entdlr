project (entdlr_parser)

set (HEADERS
    entdlrParser.h
    entdlrLexer.h
    entdlrBaseListener.h
    entdlrListener.h
)

set (SOURCE
    entdlrParser.cpp
    entdlrLexer.cpp
    entdlrBaseListener.cpp
    entdlrListener.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::parser ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC antlr4_static
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/parser)

