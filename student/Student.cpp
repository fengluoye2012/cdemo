//
// Created by 风落叶 on 2019-06-05.
//

#include <iostream>
#include "Student.h"
/**
 * using的使用;
 * 1:using namespace 命名空间;
 * 在程序中使用using后所跟的命名空间的元素，而不用每次要使用时指定命名空间。
 * std::cout <<"feng";
 * cout << "";
 */
using namespace std;

const string &Student::getName() const {

    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

int Student::getSex() const {
    return sex;
}

void Student::setSex(int sex) {
    Student::sex = sex;
}

int Student::getGrade() const {
    return grade;
}

void Student::setGrade(int grade) {
    Student::grade = grade;
}

Student::Student() {

}

Student::Student(string name, int age, int sex, int grade) {
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->grade = grade;
}

Student::~Student() {
    cout << "对象被删除\n";
}


void Student::study() {
    cout << "学生每天都要要学习\n";
}

Student::Student(const string &name) : name(name) {}


