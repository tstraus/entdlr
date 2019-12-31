project (entdlr_fbs_parser)

set (HEADERS
    FlatBuffersParser.h
    FlatBuffersLexer.h
    FlatBuffersBaseListener.h
    FlatBuffersListener.h
    FlatBuffersBaseVisitor.h
    FlatBuffersVisitor.h
)

set (SOURCE
    FlatBuffersParser.cpp
    FlatBuffersLexer.cpp
    FlatBuffersBaseListener.cpp
    FlatBuffersListener.cpp
    FlatBuffersBaseVisitor.cpp
    FlatBuffersVisitor.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::fbs_parser ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC antlr4_static
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/parser)

