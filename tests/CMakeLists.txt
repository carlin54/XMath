cmake_minimum_required(VERSION 3.3)
project(xmath_tests)

include_directories(../src)

set(SOURCE_FILES main.cpp)

add_subdirectory(linear_algebra)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
link_libraries(gtest pthread)
add_executable(xmath_tests ${SOURCE_FILES})