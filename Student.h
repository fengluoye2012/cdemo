//
// Created by 风落叶 on 2019-06-05.
//

#ifndef STUDENT_H
#define STUDENT_H

#include "string"

/**
 * C++中头文件（.h）和源文件（.cpp）都应该写些什么
 * https://www.cnblogs.com/fenghuan/p/4794514.html
 *
 * 头文件(.h)：
 *      写类的声明（包括类里面的成员和方法的声明）、函数原型、#define常数等，但一般来说不写出具体的实现。
 * 源文件（.cpp）：
 *      源文件主要写实现头文件中已经声明的那些函数的具体代码。需要注意的是，开头必须#include一下实现的头文件，以及要用到的头文件。
 */

using std::string;

class Student {

private:
    //成员变量
    string name;
    int age;
    int sex;
    int grade;

public:

    //成员函数
    int getGrade() const;

    void setGrade(int grade);

    //类成员函数
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getSex() const;

    void setSex(int sex);

    //构造函数
    Student();

    Student(string name, int age, int sex, int grade);


};


#endif
