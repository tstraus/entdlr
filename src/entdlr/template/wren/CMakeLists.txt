project (entdlr_template_wren)

set (HEADERS
    wren_template.h
)

set (SOURCE
    wren_template.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::template::wren ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::context
    PUBLIC entdlr::template::interface
    PUBLIC wren
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/template/wren)

add_subdirectory (tests)

