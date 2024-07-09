cmake_minimum_required(VERSION 3.10)

project(test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(test Chapter_11_5.cpp func.cpp)