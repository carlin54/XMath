cmake_minimum_required(VERSION 3.3)
project(xmath)

set(HEADER_FILES linear_algebra.h)
set(HEADER_FILES matrix.h)
set(HEADER_FILES matrix_identity.h)
set(HEADER_FILES matrix_precision.h)
set(HEADER_FILES matrix_transpose.h)


set(SOURCE_FILES matrix.cpp)
set(SOURCE_FILES matrix_identity.cpp)
set(SOURCE_FILES matrix_precision.cpp)
set(SOURCE_FILES matrix_transpose.cpp)

add_subdirectory(misc)