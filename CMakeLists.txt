cmake_minimum_required(VERSION 3.13)
project(cdemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cdemo
        student/Freshman.cpp
        student/Freshman.h
        student/HighStudent.cpp
        student/HighStudent.h
        main.cpp
        student/Student.cpp
        student/Student.h
        student/StudentManagerHelper.cpp
        student/StudentManagerHelper.h
        LinkTest.cpp
        LinkTest.h thread_test/ThreadTest.cpp thread_test/ThreadTest.h pointer/PointerTest.cpp pointer/PointerTest.h interface_test/Action.cpp interface_test/Action.h interface_test/Bird.cpp interface_test/Bird.h interface_test/Fish.cpp interface_test/Fish.h reference_test/ReferenceTest.cpp reference_test/ReferenceTest.h func_param_test/FuncParamTest.cpp func_param_test/FuncParamTest.h string_test/StringTest.cpp string_test/StringTest.h)
