project(app)
cmake_minimum_required(VERSION 3.2.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)

set(COMPILE_OPTIONS -std=c++17)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE Qt5::Widgets stdc++fs)
target_compile_options(app PRIVATE ${COMPILE_OPTIONS})
