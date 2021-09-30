project (entdlr_flatbuffer_parser)

set (HEADERS
    FlatBuffersParser.h
    FlatBuffersLexer.h
    FlatBuffersParserBaseListener.h
    FlatBuffersParserListener.h
    FlatBuffersParserBaseVisitor.h
    FlatBuffersParserVisitor.h
)

set (SOURCE
    FlatBuffersParser.cpp
    FlatBuffersLexer.cpp
    FlatBuffersParserBaseListener.cpp
    FlatBuffersParserListener.cpp
    FlatBuffersParserBaseVisitor.cpp
    FlatBuffersParserVisitor.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::flatbuffer_parser ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC antlr4_static
)

