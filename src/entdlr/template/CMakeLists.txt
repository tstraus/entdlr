project (entdlr_template)

set (HEADERS
    inja_template.h
    json_helpers.h
    type_map.h
    rang.hpp
)

set (SOURCE
    inja_template.cpp
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
    PUBLIC wren
)

if (UNIX)
    target_link_libraries (${PROJECT_NAME} PUBLIC stdc++fs)
endif ()

add_subdirectory (tests)

