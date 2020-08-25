set (CMAKE_DEBUG_POSTFIX d)
set (CMAKE_RELWITHDEBINFO_POSTFIX rd)
set (CMAKE_MINSIZEREL_POSTFIX rm)

include_directories(.)

project (tmplj)

add_executable (${PROJECT_NAME}
    main.cpp
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC entdlr::template
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)
