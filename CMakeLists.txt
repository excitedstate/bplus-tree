cmake_minimum_required(VERSION 3.26)
project(bplus-tree-c)

set(CMAKE_C_STANDARD 11)

include_directories(include)
add_subdirectory(src)
add_subdirectory(test)