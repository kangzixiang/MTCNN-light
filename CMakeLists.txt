cmake_minimum_required(VERSION 2.8)
project(MTCNN-light)

function (add_subdirectory_if_exist arg)
    message(STATUS "add_subdirectory_if_exist: ${CMAKE_CURRENT_SOURCE_DIR}/${ARGV0}/CMakeLists.txt")
    if (EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${ARGV0}/CMakeLists.txt)
        add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/${ARGV0})
    endif()
endfunction ()

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DDEBUG -O0 -Wall -g2 -ggdb -pthread")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/products/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/products/lib)

add_subdirectory_if_exist(src/libs/mtcnn)
add_subdirectory_if_exist(src/apps/mtcnn-image)
add_subdirectory_if_exist(src/apps/mtcnn-camera)