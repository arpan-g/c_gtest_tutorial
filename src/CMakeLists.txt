cmake_minimum_required(VERSION 2.8.9)
project(c_tutorial)


include_directories(../include)

file(GLOB SOURCES "*.c")

add_executable(c_tutorial ${SOURCES})


