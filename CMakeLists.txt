cmake_minimum_required(VERSION 3.10)
project(LeetCodeProject)

set(CMAKE_CXX_STANDARD 14)

# Include directories
include_directories(include)

# Download and include GoogleTest
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/release-1.12.1.zip
)

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Download and configure GoogleTest
FetchContent_MakeAvailable(googletest)

# Add test executable for twoSum
add_executable(test_twoSum src/twoSum.cpp tests/test_twoSum.cpp)
target_link_libraries(test_twoSum gtest gtest_main)