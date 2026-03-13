cmake_minimum_required(VERSION 3.10)
project(Lab2_Project C)

add_executable(factorial src/main.c src/math_utils.c)

target_include_directories(factorial PRIVATE include)
