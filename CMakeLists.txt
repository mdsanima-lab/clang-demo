# Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
# Licensed under the MIT license.

cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD           20)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

project(mdsanima VERSION 0.2.1)

# Example demo program fantastic
add_executable(${PROJECT_NAME}-fantastic example/mdsanima-fantastic/main.cc)
add_library(fantastic SHARED example/mdsanima-fantastic/lib.cc)
target_link_libraries(${PROJECT_NAME}-fantastic fantastic)

# Example demo program incredible
add_executable(${PROJECT_NAME}-incredible example/mdsanima-incredible/main.cpp)
add_library(incredible SHARED example/mdsanima-incredible/lib.cpp)
target_link_libraries(${PROJECT_NAME}-incredible incredible)

# Example demo program stunning
add_executable(${PROJECT_NAME}-stunning example/mdsanima-stunning/main.cxx)
add_library(stunning SHARED example/mdsanima-stunning/lib.cxx)
target_link_libraries(${PROJECT_NAME}-stunning stunning)

# Project demo programs
add_executable(${PROJECT_NAME}-amarok project/mdsanima-amarok/main.c)
add_executable(${PROJECT_NAME}-blizzard project/mdsanima-blizzard/main.c)
add_executable(${PROJECT_NAME}-conquest project/mdsanima-conquest/main.c)

# Project demo library
add_library(${PROJECT_NAME} STATIC lib/mdsanima.c)

# Targeting demo library
target_link_libraries(mdsanima-amarok mdsanima)
target_link_libraries(mdsanima-blizzard mdsanima)
target_link_libraries(mdsanima-conquest mdsanima)

# Targeting demo programs
target_include_directories(mdsanima INTERFACE project/mdsanima-amarok/)
target_include_directories(mdsanima INTERFACE project/mdsanima-blizzard/)
target_include_directories(mdsanima INTERFACE project/mdsanima-conquest/)

# Installing demo programs
install(TARGETS mdsanima-amarok DESTINATION bin)
install(TARGETS mdsanima-blizzard DESTINATION bin)
install(TARGETS mdsanima-conquest DESTINATION bin)

# Installing demo library
install(TARGETS mdsanima DESTINATION lib)
install(FILES lib/mdsanima.h DESTINATION include)
