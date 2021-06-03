cmake_minimum_required (VERSION 3.1.0)

set (CMAKE_CXX_STANDARD 17)

project (entdlr)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory (src)

set (CMAKE_EXPORT_PACKAGE_REGISTRY ON)
export (TARGETS entdlr_context entdlr_parser entdlr_flatbuffer_parser entdlr_javadoc_parser entdlr_template entdlr_template_interface entdlr_template_inja entdlr_template_wren entdlr tmplj antlr4_static inja wren NAMESPACE entdlr:: FILE entdlrTargets.cmake)
export (PACKAGE entdlr)

# Packaging support
set (CPACK_GENERATOR "ZIP")
set (CPACK_PACAKGE_VENDOR "tstraus")
set (CPACK_PACKAGE_DESCRIPTION_SUMMARY "entdlr")
set (CPACK_PACKAGE_VERSION_MAJOR 0)
set (CPACK_PACKAGE_VERSION_MINOR 7)
set (CPACK_PACKAGE_VERSION_PATCH 4)
set (CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set (CPACK_INCLUDE_TOPLEVEL_DIRECTORY OFF)

include (CPack)

