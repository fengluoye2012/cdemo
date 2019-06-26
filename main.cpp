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
#include "template/TemplateTest.h"
#include "LinkTest.h"

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

void templateTest();

void staticTest();

void listTest();

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
//    init_string();
//    init_student();
//
//    init_high_student();
//    init_high_student();
//
//    name_space_test();

//    init_vector();

//    templateTest();
//    staticTest();

    listTest();
    return 0;
}

//定义别名；
typedef  list<Freshman> FRESHMAN;
void listTest() {
    FRESHMAN list1;
    list1.emplace_back(Freshman("feng"));
    list1.emplace_back(Freshman("luo"));
    list1.emplace_back(Freshman("ye"));

    //普通循环；
    for (int i = 0; i < list1.size();++i) {
      cout << "名称：：" << list1.front().getName()<<"\n";
    }

    //迭代器；
    FRESHMAN::iterator ite;
    for(ite = list1.begin();ite != list1.end();ite++){
       std:: cout <<  (*ite).getName() <<"\n";
    }
}

void staticTest() {
    //静态变量的使用和初始化
    cout << "使用静态变量：：" << StudentManagerHelper::a << "\n";

    int a = StudentManagerHelper::a + 20;
    int b = StudentManagerHelper::b + 10;

    cout << "a：：" << a << ",,b::" << b << "\n";

    cout << "staticMethod::" << StudentManagerHelper::getStaticMethod() << "\n";
}

void templateTest() {
    TemplateTest<int> test = TemplateTest<int>(10, 20);
    TemplateTest<int> test2;
    test2.setA(20);
    test2.setB(30);

    test.operator+(test2);

    cout << "a::" << test.getA() << ",,b::" << test.getB() << "\n";

    TemplateTest<string> str = TemplateTest<string>("feng", "男");
    TemplateTest<string> str2;
    str2.setA("luoye");
    str2.setB("女");

    str.operator+(str2);

    cout << "a::" << str.getA() << ",,b::" << str.getB() << "\n";
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

    //拼接
    name += "hahah";
    name.append("append");

    //能够存储的长度；
    int capa = name.capacity();
    //当前长度；
    int length = name.size();
    cout << name << ",," << capa << ",,," << length << "\n";

}