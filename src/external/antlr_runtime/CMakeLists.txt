set (ANTLR_VERSION 4)

set (INCLUDES
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/atn
  ${CMAKE_CURRENT_SOURCE_DIR}/dfa
  ${CMAKE_CURRENT_SOURCE_DIR}/misc
  ${CMAKE_CURRENT_SOURCE_DIR}/support
  ${CMAKE_CURRENT_SOURCE_DIR}/tree
  ${CMAKE_CURRENT_SOURCE_DIR}/tree/pattern
  ${CMAKE_CURRENT_SOURCE_DIR}/tree/xpath
)


file(GLOB libantlrcpp_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/atn/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/dfa/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/misc/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/support/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/tree/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/tree/pattern/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/tree/xpath/*.cpp"
)

add_library(antlr4_shared SHARED ${libantlrcpp_SRC})
add_library(antlr4_static STATIC ${libantlrcpp_SRC})

target_include_directories (antlr4_shared PUBLIC ${INCLUDES})
target_include_directories (antlr4_static PUBLIC ${INCLUDES})

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
  target_link_libraries(antlr4_shared ${UUID_LIBRARIES})
  target_link_libraries(antlr4_static ${UUID_LIBRARIES})
elseif(APPLE)
  target_link_libraries(antlr4_shared ${COREFOUNDATION_LIBRARY})
  target_link_libraries(antlr4_static ${COREFOUNDATION_LIBRARY})
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4_shared PUBLIC "/wd4251" "/wd4996" "/wd4217")
  target_compile_options(antlr4_static PUBLIC "/wd4251" "/wd4996" "/wd4217")
  target_link_options(antlr4_shared PUBLIC "/ignore:4217")
  target_link_options(antlr4_static PUBLIC "/ignore:4217")
else()
  set(disabled_compile_warnings "-Wno-overloaded-virtual")
  target_compile_options(antlr4_shared PUBLIC "-Wno-attributes")
  target_compile_options(antlr4_static PUBLIC "-Wno-attributes")
endif()

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
  set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-dollar-in-identifier-extension -Wno-four-char-constants")
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU" OR "${CMAKE_CXX_COMPILER_ID}" MATCHES "Intel")
  set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-multichar")
endif()

set(extra_share_compile_flags "")
set(extra_static_compile_flags "")
if(WIN32)
  set(extra_share_compile_flags "-DANTLR4CPP_EXPORTS")
  set(extra_static_compile_flags "-DANTLR4CPP_STATIC")
endif(WIN32)
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  if(WITH_STATIC_CRT)
    target_compile_options(antlr4_shared PRIVATE "/MT$<$<CONFIG:Debug>:d>")
    target_compile_options(antlr4_static PRIVATE "/MT$<$<CONFIG:Debug>:d>")
  else()
    target_compile_options(antlr4_shared PRIVATE "/MD$<$<CONFIG:Debug>:d>")
    target_compile_options(antlr4_static PRIVATE "/MD$<$<CONFIG:Debug>:d>")
  endif()
endif()

set(static_lib_suffix "")
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(static_lib_suffix "-static")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(extra_share_compile_flags "-DANTLR4CPP_EXPORTS -MP /wd4251")
  set(extra_static_compile_flags "-DANTLR4CPP_STATIC -MP")
endif()

set_target_properties(antlr4_shared
                      PROPERTIES VERSION   ${ANTLR_VERSION}
                                 SOVERSION ${ANTLR_VERSION}
                                 OUTPUT_NAME antlr4-runtime
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}"
)

set_target_properties(antlr4_static
                      PROPERTIES VERSION   ${ANTLR_VERSION}
                                 SOVERSION ${ANTLR_VERSION}
                                 OUTPUT_NAME "antlr4-runtime${static_lib_suffix}"
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_static_compile_flags}"
)

