project (entdlr_context)

set (HEADERS
    token.h
    attribute.h
    enum.h
    union.h
    method.h
    struct.h
    facility.h
    namespace.h
    context.h
)

set (SOURCE
    attribute.cpp
    enum.cpp
    union.cpp
    method.cpp
    struct.cpp
    facility.cpp
    namespace.cpp
    context.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::context ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/context)
