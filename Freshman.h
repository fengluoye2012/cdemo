//
// Created by wjw on 2019-06-06.
//

#ifndef CTEST_FRESHMAN_H
#define CTEST_FRESHMAN_H

#include "Student.h"

//大一新生
class Freshman :public Student{
public:
    Freshman();

    Freshman(const string &name);

    Freshman(const string &name, int age, int sex, int grade);

public:
    void sleep() override;
};


#endif //CTEST_FRESHMAN_H
