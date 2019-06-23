//
// Created by wjw on 2019-06-06.
//

#include "HighStudent.h"
#include <iostream>

using namespace std;

int HighStudent::getScore() const {
    return score;
}

void HighStudent::setScore(int score) {
    HighStudent::score = score;
    judgeByScore();
}

HighStudent::HighStudent() : Student() {

}

HighStudent::HighStudent(const string &name, int age, int sex, int grade, int score) :
        Student(name, age, sex, grade) {
    this->score = score;
}

void HighStudent::judgeByScore() {

    int s = getScore();
    if (s > 650) {
        cout << "清华北大等985\n";
    }
}

void HighStudent::sleep() {

}


