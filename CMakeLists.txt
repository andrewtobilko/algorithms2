cmake_minimum_required(VERSION 3.8)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/JohnsonTrotterAlgorithm.cpp src/JohnsonTrotterAlgorithm.h)
add_executable(algorithms ${SOURCE_FILES})