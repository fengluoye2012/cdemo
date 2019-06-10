cmake_minimum_required(VERSION 3.13)
project(CTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(CTest main.cpp Student.cpp Student.h HighStudent.cpp HighStudent.h Freshman.cpp Freshman.h)