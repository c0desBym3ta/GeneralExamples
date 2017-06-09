cmake_minimum_required(VERSION 3.7)
project(Inheritance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Dog.cpp Dog.h Animal.cpp Animal.h Cat.cpp Cat.h)
add_executable(Inheritance ${SOURCE_FILES})