cmake_minimum_required(VERSION 2.8)

project(studentManager)

include_directories(${CMAKE_SOURCE_DIR}/include)

aux_source_directory(${CMAKE_SOURCE_DIR}/src SOURCES)

add_executable(student_app ${SOURCES})


