cmake_minimum_required(VERSION 3.10)
project(CS2_Calculator)

add_library(calculator calculator.cpp)
add_executable(test test.cpp)
target_link_libraries(test calculator)
