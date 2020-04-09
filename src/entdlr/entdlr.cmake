set (ENTDLR_ROOT "${CMAKE_CURRENT_LIST_DIR}/../")
set (ENTDLR_EXECUTABLE "${ENTDLR_ROOT}/bin/entdlr")

# Make ENTDLR parser a file
macro (ENTDLR_TARGET DefinitionFile TemplateFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} "-t=${TemplateFile}" "-f=${DefinitionFile}" "-o=${OutputFile}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR][${Name}]"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    set (ENTDLR_${Name}_OUTPUT ${OutputFile})
endmacro ()
