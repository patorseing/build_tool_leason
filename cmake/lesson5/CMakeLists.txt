cmake_minimum_required(VERSION 3.19)

project(quickbits)

configure_file(QuickbitsConfig.hh.in QuickbitsConfig.hh)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(target panda)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${PROJECT_BINARY_DIR})

add_library(catlib cat.cc)

add_executable(${target} main.cc)

target_link_libraries(${target} catlib)
