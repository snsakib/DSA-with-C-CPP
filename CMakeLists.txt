cmake_minimum_required(VERSION 3.21)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Recursion)
add_executable(static-variables-in-recursion Recursion/static-variables-in-recursion.cpp)
add_executable(global-variables-in-recursion Recursion/global-variables-in-recursion.cpp)
add_executable(tail-recursion Recursion/tail-recursion.cpp)
add_executable(head-recursion Recursion/head-recursion.cpp)