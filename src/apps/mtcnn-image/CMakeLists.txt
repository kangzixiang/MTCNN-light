cmake_minimum_required(VERSION 2.8)
project(mtcnn_image)

find_package(OpenCV REQUIRED)

set(Include_Path "../../libs/mtcnn")
include_directories(${Include_Path})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} MTCNN_IMAGE_SOURCE)

add_executable(${PROJECT_NAME} ${MTCNN_IMAGE_SOURCE})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
target_link_libraries(${PROJECT_NAME} openblas mtcnn)