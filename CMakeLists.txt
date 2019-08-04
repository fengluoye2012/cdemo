cmake_minimum_required(VERSION 3.13)
project(cdemo)

#spdlog
# spdlog 的安装目录，可以通过命令"brew info spdlog"获取
set(APDLOG_DIR /usr/local/Cellar/spdlog/1.3.1)
# 头文件搜索路径
include_directories(${APDLOG_DIR}/include/)
# 动态链接库或静态链接库的搜索路径
link_directories(${APDLOG_DIR}/lib/)

#FFmpeg
set(FFMPEG_DIR /usr/local/Cellar/ffmpeg/4.1.1) # FFmpeg的安装目录，可以通过命令"brew info ffmpeg"获取
include_directories(${FFMPEG_DIR}/include/) # 头文件搜索路径
link_directories(${FFMPEG_DIR}/lib/) # 动态链接库或静态链接库的搜索路径


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
        LinkTest.h thread_test/ThreadTest.cpp thread_test/ThreadTest.h
        pointer/PointerTest.cpp pointer/PointerTest.h interface_test/Action.cpp
        interface_test/Action.h interface_test/Bird.cpp interface_test/Bird.h
        interface_test/Fish.cpp interface_test/Fish.h reference_test/ReferenceTest.cpp
        reference_test/ReferenceTest.h func_param_test/FuncParamTest.cpp
        func_param_test/FuncParamTest.h string_test/StringTest.cpp
        string_test/StringTest.h)

# 添加链接库
target_link_libraries(
        cdemo
        avcodec
        avdevice
        avfilter
        avformat
        avresample
        avutil
        postproc
        swresample
        swscale
)
