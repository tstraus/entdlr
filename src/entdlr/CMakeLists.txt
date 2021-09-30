set (CMAKE_DEBUG_POSTFIX d)
set (CMAKE_RELWITHDEBINFO_POSTFIX rd)
set (CMAKE_MINSIZEREL_POSTFIX rm)

include_directories(.)

add_subdirectory (parser)
add_subdirectory (context)
add_subdirectory (template)
add_subdirectory (samples)

project (entdlr)

add_executable (${PROJECT_NAME}
    main.cpp
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::parser
    PUBLIC entdlr::template
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)
install (FILES entdlr.cmake DESTINATION cmake)
