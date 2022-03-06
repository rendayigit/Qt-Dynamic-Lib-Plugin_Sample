cmake_minimum_required(VERSION 3.2.0)

project(dlib)

file(MAKE_DIRECTORY ${directory}/bin)

add_subdirectory(dlibs)
add_subdirectory(app)