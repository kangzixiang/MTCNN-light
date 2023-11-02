cmake_minimum_required(VERSION 2.8)
project(mtcnn)

find_package(OpenCV REQUIRED)

include_directories(/usr/include/x86_64-linux-gnu)
link_directories(/usr/lib/x86_64-linux-gnu)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} MTCNNLIB_SOURCE)

add_library(${PROJECT_NAME} STATIC ${MTCNNLIB_SOURCE})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
target_link_libraries(${PROJECT_NAME} openblas)