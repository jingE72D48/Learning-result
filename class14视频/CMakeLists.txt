cmake_minimum_required(VERSION 2.9)

project(opencv_try2)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(try2 try2.cpp)

target_link_libraries(try2 PRIVATE ${OpenCV_LIBS})
