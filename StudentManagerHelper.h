//
// Created by 风落叶 on 2019-06-23.
//

#ifndef CTEST_STUDENTMANAGERHELPER_H
#define CTEST_STUDENTMANAGERHELPER_H

#include <array>
#include "vector"
#include "list"
#include "string"

#include "Student.h"
using namespace std;
//using std::array;

/**
 * C++ 数据结构  https://blog.csdn.net/Leader_wang/article/details/82959362
 * 1、array: 固定大小数组。支持快速随机访问。不能添加或删除元素。
 * 2、vector：可变大小数组。支持快速随机访问。在尾部之外的位置插入或删除元素可能很慢。
 * 2、queue队列 该容器内存结构最好为链式结构，最知名的特点是先进先出；
 * 3、stack 栈在内存上可为连续或者链式，于队列相反的是它为先进后出；
 * 4、list 链表 链表在内存结构上为链式结构，也就决定它可以动态增加；
 * 5、map map为关联式容器，提供一对一服务，每个关键字在容器中只能出现一次，适用于一对一服务；
 * 6、set 元素按序排列不重复；
 * 7、vector 向量
 *
 * new 关键字动态申请内存；创建指针类型；
 */


class StudentManagerHelper {


protected:
    vector<Student>stuVector;

public:
    void addStudent(Student student);

    Student * getStudent(int pos);

    void insertStudent(Student student);

    void deleteStudent(int pos);

    void getStudents();

    void getStudentCount();
};


#endif //CTEST_STUDENTMANAGERHELPER_H
