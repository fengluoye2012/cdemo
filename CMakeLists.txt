cmake_minimum_required(VERSION 3.13)
project(cdemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cdemo
        Freshman.cpp
        Freshman.h
        HighStudent.cpp
        HighStudent.h
        main.cpp
        Student.cpp
        Student.h
        StudentManagerHelper.cpp
        StudentManagerHelper.h)
