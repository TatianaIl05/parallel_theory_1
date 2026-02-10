cmake_minimum_required(VERSION 3.10)
project(SinusSum)

option(USE_FLOAT "Use float precision instead of double" OFF)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp)

if(USE_FLOAT)
    target_compile_definitions(main PRIVATE USE_FLOAT)
    message(STATUS "Building with FLOAT precision")
else()
    message(STATUS "Building with DOUBLE precision (default)")
endif()
