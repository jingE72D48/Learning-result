cmake_minimum_required(VERSION 2.8)

project(opencv_try1)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(try1 try1.cpp)

target_link_libraries(try1 PRIVATE ${OpenCV_LIBS})

