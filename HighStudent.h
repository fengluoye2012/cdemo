//
// Created by wjw on 2019-06-06.
//

#ifndef CTEST_HIGHSTUDENT_H
#define CTEST_HIGHSTUDENT_H

#include "Student.h"

//继承:分为单继承和多继承(一般用的少)
class HighStudent : public Student {
private:
    int score;
    void judgeByScore();

public:
    int getScore() const;

    void setScore(int score);

    HighStudent();

    HighStudent(const string &name, int age, int sex, int grade, int score);


    void  sleep() override;
};


#endif //CTEST_HIGHSTUDENT_H
