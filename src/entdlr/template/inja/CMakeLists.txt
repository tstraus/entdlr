project (entdlr_template_inja)

set (HEADERS
    inja_template.h
    json_helpers.h
    type_map.h
)

set (SOURCE
    inja_template.cpp
    json_helpers.cpp
    type_map.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::template::inja ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::context
    PUBLIC entdlr::template::interface
    PUBLIC inja
)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_libraries (${PROJECT_NAME} PUBLIC stdc++fs)
endif ()

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/template/inja)

