# Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
# Licensed under the MIT license

cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD           20)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

project(mdsanima VERSION 0.2.0)

# Example
add_executable(${PROJECT_NAME}-awesome example/mdsanima-awesome/main.c)
add_executable(${PROJECT_NAME}-fantastic example/mdsanima-fantastic/main.cc)
add_executable(${PROJECT_NAME}-incredible example/mdsanima-incredible/main.cpp)
add_executable(${PROJECT_NAME}-stunning example/mdsanima-stunning/main.cxx)

# Project
add_executable(mdsanima-amarok project/mdsanima-amarok/main.c)
add_library(mdsanima STATIC project/mdsanima-amarok/mdsanima.c)
target_include_directories(mdsanima INTERFACE project/mdsanima-amarok/)
target_link_libraries(mdsanima-amarok mdsanima)
install(TARGETS mdsanima-amarok DESTINATION bin)
install(TARGETS mdsanima DESTINATION lib)
install(FILES project/mdsanima-amarok/mdsanima.h DESTINATION include)
