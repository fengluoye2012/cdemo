//
// Created by 风落叶 on 2019-06-30.
//

#include "iostream"
#include "ThreadTest.h"
#include "thread"

using std::thread;
using namespace std;

//开启子线程需要注意，参数为方法名；
void ThreadTest::startThread() {
    thread thread1(printInHello);
    //主线程等待子线程执行完之后，再执行；
    thread1.join();
}

void ThreadTest::printInHello() {
    cout << "子线程 输出HelloWord" << "\n";
}

void ThreadTest::startThread(int a) {
    cout << "同名方法" << a << "\n";


    //函数指针
    //1)pf可指向int(int,int)类型的函数，
    int (*pf)(int);
    //2）通过赋值使得函数指针指向某具体函数
    pf = printInHello2;
    //函数指针的调用
   // pf(20);
    (*pf)(20);

    //thread thread1();
    //thread thread1(printInHello,20);
    //printInHello2(20);

}


int ThreadTest::printInHello2(int a) {
    cout << "printInHello::" << a << "\n";
    return 10;
}


