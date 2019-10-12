//
// Created by wjw on 2019-10-12.
//

#include <ffmpeg_test/FFmpegTest.h>
#include "DefineTest.h"
#include "spdlog/spdlog.h"

void DefineTest::circleArea(int radius) {
    double area = radius * radius * PI;
    spdlog::info("圆的面积：：{}", area);
}

void DefineTest::defineFunc(int a, int b) {
   int max =  MAX(a,b);
   spdlog::info("a 和 b 中那个最大{}",max);
}

