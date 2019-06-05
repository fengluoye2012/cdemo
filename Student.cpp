//
// Created by 风落叶 on 2019-06-05.
//

#include "Student.h"

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


