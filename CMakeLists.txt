# Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
# Licensed under the MIT license.

cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD           20)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

project(mdsanima VERSION 0.2.0)

# Example demo programs
add_executable(${PROJECT_NAME}-deeply example/mdsanima-deeply/main.c)
add_executable(${PROJECT_NAME}-fantastic example/mdsanima-fantastic/main.cc)
add_executable(${PROJECT_NAME}-incredible example/mdsanima-incredible/main.cpp)
add_executable(${PROJECT_NAME}-stunning example/mdsanima-stunning/main.cxx)

# Project demo programs
add_executable(${PROJECT_NAME}-amarok project/mdsanima-amarok/main.c)
add_executable(${PROJECT_NAME}-blizzard project/mdsanima-blizzard/main.c)

# Project demo library
add_library(${PROJECT_NAME} STATIC project/mdsanima-amarok/mdsanima.c)

# Targeting the library
target_include_directories(mdsanima INTERFACE project/mdsanima-amarok/)
target_include_directories(mdsanima INTERFACE project/mdsanima-blizzard/)
target_link_libraries(mdsanima-amarok mdsanima)
target_link_libraries(mdsanima-blizzard mdsanima)

# Installation of the demo programs
install(TARGETS mdsanima-amarok DESTINATION bin)
install(TARGETS mdsanima-blizzard DESTINATION bin)
install(TARGETS mdsanima-deeply DESTINATION bin)
install(TARGETS mdsanima-fantastic DESTINATION bin)
install(TARGETS mdsanima-incredible DESTINATION bin)
install(TARGETS mdsanima-stunning DESTINATION bin)

# Installation of the demo library
install(TARGETS mdsanima DESTINATION lib)
install(FILES project/mdsanima-amarok/mdsanima.h DESTINATION include)
