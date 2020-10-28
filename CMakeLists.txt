cmake_minimum_required(VERSION 3.8)
project(ompDES_cracker)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_FLAGS "-fopenmp")
set(SOURCE_FILES main.cpp crypt3.h ArgsParser.h crypt3.cpp)
add_executable(ompDES_cracker ${SOURCE_FILES})

