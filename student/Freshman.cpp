//
// Created by wjw on 2019-06-06.
//

#include "iostream"
#include "Freshman.h"


Freshman::Freshman() {
}

Freshman::Freshman(const string &name, int age, int sex, int grade) : Student(name, age, sex, grade) {}

void Freshman::sleep() {
    std::cout << "大一新生休息时间多";
}

Freshman::Freshman(const string &name) : Student(name) {}






