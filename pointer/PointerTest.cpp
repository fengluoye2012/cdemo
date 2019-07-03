//
// Created by wjw on 2019-07-03.
//

#include "iostream"
#include "PointerTest.h"

using namespace std;

//指针和变量之间转换；=
void PointerTest::pointer_test() {
    int a = 10;
    //& 取地址符；
    int *p = &a;

    //* 取内存地址值；
    int b = *p;

    cout << "int 类型的变量a的内存地址::" << p << "\n";
    cout << "指针p 内存地址对应的值：：" << b << "\n";
}

//数组和指针的转换；
//指针的长度和类型有关，指针加1，表示移动一个类型长度；
void PointerTest::array_pointer_test() {

    int arr[3] = {1, 2, 3};
    //数组和指针的转换方式一；
    //int *p = arr;

    //数组转换为指针的另一种方式；
    int *p = &arr[1];

    int b = *p;

    cout << "数组指针：：" << b << "\n";

    //加1；
    p += 1;
    int c = *p;
    cout << "数组指针：：" << c << "\n";
}

//指针数组
void PointerTest::pointer_arr_test() {
    int a = 1;
    int b = 3;
    int c = 5;

    //指针数组；
    int *arr[] = {&a, &b, &c};

    //p 为int类型指针的的指针；
    int **p = arr;
    int **p1 = &arr[0];

    cout << "p内存地址指向的值" << **p << ",,,p内存地址指向的值" << **p1 << "\n";

    //定义数组指针；指向含3个元素的一维数组；
    int (*p2)[3];
    //二维数组
    int arr2[3][3]={2,4,6,8,10,12,14,16,18};
    p2 = arr2;



}

//函数和指针的转换
void PointerTest::method_pointer_test() {

}
