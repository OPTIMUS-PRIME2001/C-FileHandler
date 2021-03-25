cmake_minimum_required(VERSION 3.17)
project(C_FileHandler)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_FileHandler FileSTU.cpp)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Stu.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)