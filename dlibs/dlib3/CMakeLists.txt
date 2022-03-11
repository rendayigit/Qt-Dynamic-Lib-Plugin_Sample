project(dlib3)
cmake_minimum_required(VERSION 3.2.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)

set(COMPILE_OPTIONS -std=c++17)

add_library(dlib3 SHARED plugin3.cpp)

set_target_properties(dlib3 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../../bin/) # UNIX
set_target_properties(dlib3 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../../bin/) # WINDOWS

target_link_libraries(dlib3 PRIVATE Qt5::Widgets)
target_compile_options(dlib3 PRIVATE ${COMPILE_OPTIONS})