cmake_minimum_required(VERSION 2.8.9)
project(c_gtest_tutorial)
enable_testing()

include_directories(../include)
find_package(Threads)
find_package(GTest)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall -Wextra -O3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++11 -ggdb -O0")
set(CMAKE_C_FLAGS_DEBUG "-Wall -Wextra -g -O0")
message(STATUS "pthread: " ${CMAKE_THREAD_LIBS_INIT})

SET(SOURCES "addTests.cpp" "AllTests.cpp" "divTests.cpp" "mulTests.cpp" "subTests.cpp")
SET(SOURCES ${SOURCES} "../src/addition.c" "../src/division.c" "../src/multiplication.c" "../src/subtract.c")

add_executable(c_gtest_tutorial ${SOURCES})
target_link_libraries (c_gtest_tutorial ${CMAKE_THREAD_LIBS_INIT} ${GTEST_BOTH_LIBRARIES} pthread)
add_test(NAME mytest COMMAND c_gtest_tutorial)
