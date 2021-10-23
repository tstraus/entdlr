add_subdirectory (antlr_runtime)
add_subdirectory (inja)
add_subdirectory (wren)
add_subdirectory (doctest)
add_subdirectory (util)

if (BUILD_PY_ENTDLR)
    add_subdirectory (pybind)
endif ()
