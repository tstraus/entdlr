set (ENTDLR_ROOT "${CMAKE_CURRENT_LIST_DIR}/../")

if (WIN32)
    set (ENTDLR_EXECUTABLE "${ENTDLR_ROOT}/bin/entdlr.exe")
else ()
    set (ENTDLR_EXECUTABLE "${ENTDLR_ROOT}/bin/entdlr")
endif ()

# Make ENTDLR parse a file
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FILE_TARGET_MIN DefinitionFile TemplateFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})

    # parse option arguments
    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-o" "${OutputFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-o" "${OutputFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a file with a provided wren file
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FILE_TARGET_WREN DefinitionFile TemplateFile WrenFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})

    # parse option arguments
    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-w" "${WrenFile}" "-o" "${OutputFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-w" "${WrenFile}" "-o" "${OutputFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a file with a provided confing json
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FILE_TARGET_JSON DefinitionFile TemplateFile JsonFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})

    # parse option arguments
    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-c" "${JsonFile}" "-o" "${OutputFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-c" "${JsonFile}" "-o" "${OutputFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a file with a provided wren file and confing json
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FILE_TARGET_FULL DefinitionFile TemplateFile WrenFile JsonFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})

    # parse option arguments
    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-w" "${WrenFile}" "-c" "${JsonFile}" "-o" "${OutputFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-w" "${WrenFile}" "-c" "${JsonFile}" "-o" "${OutputFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR](${Name})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_DIR_TARGET_MIN TargetName DefinitionDir TemplateFile OutputFile)
    FILE (GLOB_RECURSE DEF_FILES "${DefinitionDir}/*.fbs")

    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else ()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir with a provided wren file
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_DIR_TARGET_WREN TargetName DefinitionDir TemplateFile WrenFile OutputFile)
    FILE (GLOB_RECURSE DEF_FILES "${DefinitionDir}/*.fbs")

    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-w" "${WrenFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else ()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-w" "${WrenFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir with a provided config json
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_DIR_TARGET_JSON TargetName DefinitionDir TemplateFile JsonFile OutputFile)
    FILE (GLOB_RECURSE DEF_FILES "${DefinitionDir}/*.fbs")

    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-c" "${JsonFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else ()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-c" "${JsonFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir with a provided wren and config json
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_DIR_TARGET_FULL TargetName DefinitionDir TemplateFile WrenFile JsonFile OutputFile)
    FILE (GLOB_RECURSE DEF_FILES "${DefinitionDir}/*.fbs")

    if (NOT "${ARGN}" STREQUAL "")
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-w" "${WrenFIle}" "-c" "${JsonFile}" "-i" "${ARGN}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    else ()
        add_custom_command (
            OUTPUT ${OutputFile}
            COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-w" "${WrenFile}" "-c" "${JsonFile}"
            VERBATIM
            DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
            COMMENT "[ENTDLR_DIR](${TargetName})"
            WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        )
    endif ()

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        get_filename_component (Template_Filename ${TemplateFile} NAME)
        string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()