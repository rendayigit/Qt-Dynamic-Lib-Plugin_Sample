project(dlib1)
cmake_minimum_required(VERSION 3.2.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)

set(COMPILE_OPTIONS -std=c++17)

add_library(dlib1 SHARED plugin1.cpp)

set_target_properties(dlib1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../../bin/) # UNIX
set_target_properties(dlib1 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../../bin/) # WINDOWS

target_link_libraries(dlib1 PRIVATE Qt5::Widgets)
target_compile_options(dlib1 PRIVATE ${COMPILE_OPTIONS})