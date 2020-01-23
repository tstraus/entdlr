project (entdlr_template)

set (HEADERS
    template.h
    json_helpers.h
    type_map.h
)

set (SOURCE
    template.cpp
    json_helpers.cpp
    type_map.cpp
)

add_library (${PROJECT_NAME} STATIC ${HEADERS} ${SOURCE})
add_library (entdlr::template ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::context
    PUBLIC inja
)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_libraries (${PROJECT_NAME} PUBLIC stdc++fs)
endif ()

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/entdlr/template)

