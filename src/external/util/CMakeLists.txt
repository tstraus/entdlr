project (util)

set (HEADERS
    CLI11.hpp
    optional.hpp
    rang.hpp
)

add_library (${PROJECT_NAME} INTERFACE)

target_include_directories (${PROJECT_NAME}
    INTERFACE ${CMAKE_CURRENT_LIST_DIR}
)

