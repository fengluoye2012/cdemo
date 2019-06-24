#include <iostream>
#include <string>
//引入头文件；
#include "Student.h"
#include "array"
#include "StudentManagerHelper.h"
#include "Freshman.h"
#include "HighStudent.h"
#include "list"
#include "stack"

using std::string;
using namespace std;

//申明一个方法；
void init_string();

void init_student();

void init_vector();

void init_high_student();

//命名空间：作为附加信息来区分不同库中相同名称的函数、类、变量等。使用了命名空间即定义了上下文。
// 本质上，命名空间就是定义了一个范围。

void name_space_test();

void template_test();

namespace fist_space {
    void func() {
        cout << "我是first命名空间的func方法\n";
    }
}

namespace second_space {
    void func() {
        cout << "我是second命名空间的func方法\n";
    }
}

/**
 * string 的使用：
 * 1）#include <string>
 * 2）using std::string;或者 using namespace std; 因为string类位于名称空间std中；
 * string类定义隐藏了字符串的数组性质，让您能够像处理普通变量那样处理字符串
 *
 */

int main() {
    init_string();
    init_student();
    init_high_student();

    //init_high_student();


    //init_string();

    //init_student();

    // init_vector();

    //name_space_test();

    template_test();

    cout << "Hello World\n";
    //template_test();

    cout << "hello world" << "\n";

    return 0;
}

//创建动态长度数组
void init_vector() {
    StudentManagerHelper studentManagerHelper;
    studentManagerHelper.addStudent(Freshman("feng", 12, 1, 4));

    studentManagerHelper.getStudentCount();
    studentManagerHelper.insertStudent(Freshman("luo", 13, 0, 5));
    studentManagerHelper.addStudent(Freshman("ye", 12, 0, 5));
    studentManagerHelper.getStudents();

    studentManagerHelper.deleteStudent(0);
    studentManagerHelper.getStudentCount();
    studentManagerHelper.getStudents();

    //获取指针变量；
    Student *stu = studentManagerHelper.getStudent(0);
    cout << stu->getName() << "\n";
}

void template_test() {
//    stack<int> dataStack;
//    dataStack.push(2);
//    dataStack.push(4);
//    cout << "stack的size：：" << dataStack.size() << "\n";
//
//
//    list<string> strList;
//    strList.emplace_back("feng");
//    strList.emplace_back("luo");
//    strList.emplace_back("ye");
//
//    for (int i = 0; i < strList.size(); ++i) {
//        strList.emplace_back(i);
//    }
}

void name_space_test() {
    fist_space::func();
    second_space::func();
}

/**
 * 指针:是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
 * 就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。
 */
void init_high_student() {
    //声明一个指针
    Student *stu;

    HighStudent student = HighStudent("封", 18, 1, 12, 680);
    cout << student.getName() << student.getAge() << student.getSex() << student.getGrade() << std::endl;
    student.setScore(680);
    //& 取内存地址；
    stu = &student;
    cout << stu << "\n";
    cout << (*stu).getName() << "\n";

    stu->study();
}

void init_student() {

    //初始化一个变量；
    Freshman student1("feng", 12, 1, 3);
    //Student student = Student("feng",14,2,4);
    Freshman student;
    student.setName("feng");

    cout << student.getName() << student.getAge() << student.getSex() << student.getGrade() << std::endl;

    student.study();
}

void init_string() {
    //初始化变量的方法；
    string two("string 的使用");
    string str = "fengluoye";
    string name;
    name = "feng";

    cout << str << "\n";
    cout << two << "\n";
    cout << name << "\n";

    cout << "Hello, World!" << std::endl;
}