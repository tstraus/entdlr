project (entdlr_context)

set (HEADERS
    context.h
)

set (SOURCE
    context.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::context ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/context)
