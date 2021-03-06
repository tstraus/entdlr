project (entdlr_context)

set (HEADERS
    documentation.h
    token.h
    include.h
    attribute.h
    enum.h
    union.h
    method.h
    struct.h
    interface.h
    namespace.h
    context.h
)

set (SOURCE
    documentation.cpp
    token.cpp
    include.cpp
    attribute.cpp
    enum.cpp
    union.cpp
    method.cpp
    struct.cpp
    interface.cpp
    namespace.cpp
    context.cpp
)

set (UTIL
    util/argh.h
    util/optional.hpp
    util/rang.hpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE} ${UTIL})
add_library (entdlr::context ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/context)
install (FILES ${UTIL} DESTINATION include/entdlr/context/util)
