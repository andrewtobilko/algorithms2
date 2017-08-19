cmake_minimum_required(VERSION 3.8)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/algorithms/permutations/JohnsonTrotterAlgorithm.cpp src/algorithms/permutations/JohnsonTrotterAlgorithm.h src/algorithms/Algorithm.h)
add_executable(algorithms ${SOURCE_FILES})