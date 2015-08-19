project(pmuc)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_DEBUG_POSTFIX "d")

SET(CMAKE_MODULE_PATH "${pmuc_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")

find_package(OpenGL REQUIRED)

# Set C++11 flags to makesome function work
if(UNIX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")
endif()

include_directories(${OPENGL_INCLUDE_DIR})

find_package(Iconv)

if (ICONV_FOUND)
    include_directories( ${ICONV_INCLUDE_DIR} )
    add_definitions( -DICONV_FOUND )
endif (ICONV_FOUND)

aux_source_directory(src SRC_LIST)
aux_source_directory(src/api APISRC_LIST)

add_library(rvm ${APISRC_LIST})

if (ICONV_FOUND)
    target_link_libraries(rvm STATIC ${ICONV_LIBRARY})
endif (ICONV_FOUND)

file(GLOB HEADER_FILES "src/api/*.h")

install(TARGETS rvm DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION include/api)
