cmake_minimum_required (VERSION 3.14)
project (libanimals LANGUAGES CXX)

# Not specifying library type SHARED|STATIC is deliberate
add_library(
    libanimals
    libanimals/cat.cpp
)

target_include_directories(
    libanimals
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

include(cmake/testing.cmake)
