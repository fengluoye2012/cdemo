//
// Created by 风落叶 on 2019-06-23.
//

#include <iostream>
#include "StudentManagerHelper.h"

using namespace std;

int StudentManagerHelper::a = 10;
/**
 * 域操作符（::)表示方法是该类的方法；
 * @param student
 */
//const 修饰的方法，表示只读；无法对变量进行操作
void StudentManagerHelper::addStudent(Freshman student) {
    stuVector.push_back(student);//在数组尾部添加一个元素；
}

Freshman *StudentManagerHelper::getStudent(int pos) {
    //返回Student类型的变量
    // return pos < stuVector.size() ? stuVector[pos] : Student();
    //返回Student * 的指针变量
    return pos < stuVector.size() ? &stuVector[pos] : NULL;
}

//const 修饰的方法，表示只读；无法对变量进行操作
void StudentManagerHelper::insertStudent(Freshman student) {
    stuVector.insert(stuVector.begin(), student);
}

void StudentManagerHelper::deleteStudent(int pos) {
    stuVector.erase(stuVector.begin() + pos);
    //stuVector.erase(stuVector.end()-1);
}

void StudentManagerHelper::getStudents() {

    string str;

    int pos = 0;
    for (; pos < stuVector.size(); pos++) {
        Freshman stu = stuVector[pos];
        cout << stu.getName() << ",," << stu.getGrade() << ",," << stu.getAge() << "\n";
    }
}

void StudentManagerHelper::getStudentCount() {
    cout << (int) stuVector.size() << "\n";
}

int  StudentManagerHelper::getStaticMethod() {
    return StudentManagerHelper::a;
}
