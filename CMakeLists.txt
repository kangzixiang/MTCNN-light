cmake_minimum_required(VERSION 2.8)
project(mtcnn)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/products/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/products/lib)

set(QMAKE_CXXFLAGS "-std=c++11")
include_directories(/usr/include/x86_64-linux-gnu)
link_directories(/usr/lib/x86_64-linux-gnu)

find_package( OpenCV REQUIRED)

AUX_SOURCE_DIRECTORY(./src DIR_SRCS)
add_executable( ${PROJECT_NAME} ${DIR_SRCS})
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )
target_link_libraries( ${PROJECT_NAME} openblas)
