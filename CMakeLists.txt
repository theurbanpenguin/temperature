cmake_minimum_required(VERSION 3.21)
project(temperature C)

set(CMAKE_C_STANDARD 99)

add_executable(temperature main.c convert.h convert.c)
