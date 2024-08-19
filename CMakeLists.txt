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
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Download and configure GoogleTest
FetchContent_MakeAvailable(googletest)

# Automatically find all source files in src/ and tests/ directories
file(GLOB SOURCES "src/*.cpp")
file(GLOB TESTS "tests/*_test.cpp")

# Map each source file to its corresponding test file
foreach(SRC_FILE ${SOURCES})
    get_filename_component(FILE_NAME ${SRC_FILE} NAME_WE)
    set(TEST_FILE "${CMAKE_CURRENT_SOURCE_DIR}/tests/${FILE_NAME}_test.cpp")

    if(EXISTS ${TEST_FILE})
        add_executable(${FILE_NAME}_test ${SRC_FILE} ${TEST_FILE})
        target_link_libraries(${FILE_NAME}_test gtest gtest_main)
    else()
        message(WARNING "No matching test file found for ${FILE_NAME}")
    endif()
endforeach()
