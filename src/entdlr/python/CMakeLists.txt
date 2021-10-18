project(py_entdlr)

pybind11_add_module (${PROJECT_NAME}
    "py_entdlr.hpp"
    "py_entdlr.cpp"
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::parser
    PUBLIC entdlr::template
)

install (TARGETS ${PROJECT_NAME} DESTINATION python)

