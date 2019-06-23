#include <iostream>
#include <string>
//引入头文件；
#include "Student.h"
#include "array"
#include "StudentManagerHelper.h"

//using std::string;
using namespace std;

//申明一个方法；
void init_string();


void init_student();

void init_vector();

/**
 * string 的使用：
 * 1）#include <string>
 * 2）using std::string;或者 using namespace std; 因为string类位于名称空间std中；
 * string类定义隐藏了字符串的数组性质，让您能够像处理普通变量那样处理字符串
 *
 */

int main() {

    //init_string();

    //init_student();

    init_vector();

    return 0;
}

//创建动态长度数组
void init_vector() {
    StudentManagerHelper studentManagerHelper;
    studentManagerHelper.addStudent(Student("feng", 12, 1, 4));

    studentManagerHelper.getStudentCount();
    studentManagerHelper.insertStudent(Student("luo", 13, 0, 5));
    studentManagerHelper.addStudent(Student("ye", 12, 0, 5));
    studentManagerHelper.getStudents();

    studentManagerHelper.deleteStudent(0);
    studentManagerHelper.getStudentCount();
    studentManagerHelper.getStudents();

    //获取指针变量；
    Student *stu = studentManagerHelper.getStudent(0);
    cout << stu->getName() << "\n";


}

void init_student() {

    //初始化一个变量；
    Student student1("feng", 12, 1, 3);
    //Student student = Student("feng",14,2,4);
    Student student;
    student.setName("feng");

    std::cout << student.getName() << student.getAge() << student.getSex() << student.getGrade() << std::endl;
}

void init_string() {
    //初始化变量的方法；
    string two("string 的使用");
    string str = "fengluoye";
    string name;
    name = "feng";

    std::cout << str << "\n";
    std::cout << two << "\n";
    std::cout << name << "\n";

    std::cout << "Hello, World!" << std::endl;
}