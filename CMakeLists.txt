cmake_minimum_required(VERSION 3.10)
project(LeetCodeProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(LeetCodeProject
        src/main.cpp
        src/twoSum.cpp
)
