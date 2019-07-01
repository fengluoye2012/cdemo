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
 *
 * 数据抽象与数据封装
 * 数据封装是一种把数据和操作数据的函数捆绑在一起的机制，
 * 数据抽象是一种仅向用户暴露接口而把具体的实现细节隐藏起来的机制；
 */

using std::string;

/**
 * 每个抽象类中都必须有一个纯虚函数；抽象类不能被实例化；
 */
class Student {

protected:
    //成员变量
    string name;
protected:
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

    //构造函数:在初始化的时候调用;
    Student();

    Student(const string &name);

    Student(string name, int age, int sex, int grade);

    //析构函数:每次删除对象时 执行;
    ~Student();

    /**
     * 函数原型
     * 在c++中进行函数调用之前，如果被调用函数的定义在调用函数之后，必须对被调用函数的原型进行声明;
     * 一般同一个文件内函数互相调用时这样，而函数原型一般声明在头文件中，通过#include包含头文件，来找到函数原型
     */
    void study();


    /**
     * 休息
     * 纯虚函数
     */
    virtual void sleep() = 0;

};


#endif
