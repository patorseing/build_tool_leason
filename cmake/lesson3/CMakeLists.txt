cmake_minimum_required(VERSION 3.19)

project(quickbits)

set(target panda)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(catlib cat.cc)

add_executable(${target} main.cc)

target_link_libraries(${target} catlib)
