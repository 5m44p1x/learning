cmake_minimum_required(VERSION 3.20)

project(
    test
    VERSION 1.0
    LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 11)

file(GLOB test_src_cpp
    "./*.cpp"
)

file(GLOB test_src_h
    "./*.h"
)

include_directories(.)

# add_library(test_lib test_lib.cpp test_lib.hpp)

add_executable(test ${test_src_cpp})

# target_link_libraries(test PRIVATE test_lib)