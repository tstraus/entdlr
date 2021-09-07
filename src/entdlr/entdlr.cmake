set (ENTDLR_ROOT "${CMAKE_CURRENT_LIST_DIR}/../")
set (ENTDLR_EXECUTABLE "${ENTDLR_ROOT}/bin/entdlr")

# Make ENTDLR parse a file
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FILE_TARGET DefinitionFile TemplateFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    get_filename_component (Template_Filename ${TemplateFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})
    string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})

    # parse option arguments
    set (optional_args ${ARGN})
    set (includeOption "-i=")
    if (NOT "${optional_args}" STREQUAL "")
        set (includeOption "-i=${optional_args}")
    endif ()

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} "-t=${TemplateFile}" "-f=${DefinitionFile}" "-o=${OutputFile}" "${includeOption}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR][${Name}]"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_DIR_TARGET TargetName DefinitionDir TemplateFile OutputFile)
    # get a project name from it
    get_filename_component (Template_Filename ${TemplateFile} NAME)
    string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})

    # parse option arguments
    set (optional_args ${ARGN})
    set (includeOption "-i=")
    if (NOT "${optional_args}" STREQUAL "")
        set (includeOption "-i=${optional_args}")
    endif ()

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} "-t=${TemplateFile}" "-d=${DefinitionDir}" "-o=${OutputFile}" "${includeOption}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DefinitionDir} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR][${TargetName}]"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()
