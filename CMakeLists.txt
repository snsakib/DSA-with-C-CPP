cmake_minimum_required(VERSION 3.21)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Recursion)

add_executable(DSA
        Recursion/static-variables-in-recursion.cpp)
