project (entdlr_template_interface)

set (HEADERS
    i_template.h
)

add_library (${PROJECT_NAME} INTERFACE)
add_library (entdlr::template::interface ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    INTERFACE ${CMAKE_CURRENT_LIST_DIR}
)

install (FILES ${HEADERS} DESTINATION include/entdlr/template)

add_subdirectory (inja)
add_subdirectory (wren)

project (entdlr_template)

set (HEADERS
    template_router.h
)

set (SOURCE
    template_router.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::template ALIAS ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::template::interface
    PUBLIC entdlr::template::inja
    PUBLIC entdlr::template::wren
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/template)

