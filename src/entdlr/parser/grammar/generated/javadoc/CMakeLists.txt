project (entdlr_javadoc_parser)

set (HEADERS
    JavadocParser.h
    JavadocLexer.h
    JavadocParserBaseListener.h
    JavadocParserListener.h
    JavadocParserBaseVisitor.h
    JavadocParserVisitor.h
)

set (SOURCE
    JavadocParser.cpp
    JavadocLexer.cpp
    JavadocParserBaseListener.cpp
    JavadocParserListener.cpp
    JavadocParserBaseVisitor.cpp
    JavadocParserVisitor.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::javadoc_parser ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC antlr4_static
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/parser)

