cmake_minimum_required(VERSION 3.19)

project(quickbits)

add_library(catlib cat.cc)

add_executable(quickbits main.cc)

target_link_libraries(quickbits catlib)
