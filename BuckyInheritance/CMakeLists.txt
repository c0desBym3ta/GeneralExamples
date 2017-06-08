cmake_minimum_required(VERSION 3.7)
project(BuckyInheritance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Mother.cpp Mother.h Daughter.cpp Daughter.h)
add_executable(BuckyInheritance ${SOURCE_FILES})