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
    int arr2[3][3] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    p2 = arr2;


}

/**
 * 函数和指针的转换
 * 函数指针：
 * 就象某一数据变量的内存地址可以存储在相应的指针变量中一样，函数的首地址也以存储在某个函数指针变量里的。
 * 这样，我就可以通过这个函数指针变量来调用所指向的函数了。
 */
void PointerTest::method_pointer_test() {
    //第一种：函数指针的使用；
    //定义一个 有两个int类型参数，返回值是void 的类型的函数指针；
    void (*pf)(int, int);
    //通过赋值使得函数指针指向某个具体函数；
    pf = swap;
    //调用函数
    pf(1, 3);

    //第二种：
    void (*pf_01)(int, int) =swap;
    (*pf_01)(2, 5);

    //第三种
    typedef void (*PF)(int, int);
    PF pf_02 = swap;
    pf_02(3, 7);

}

void PointerTest::swap(int a, int b) {

    int c = a;
    a = b;
    b = c;
    cout << "a::" << a << ",,b::" << b << "\n";

}

/**
 * 指针作为参数
 * @param a
 * @param b
 */
void PointerTest::pointerParam(int *a) {
    (*a) = 20;


    //同一个类中函数的调用；
    //声明函数指针；
//    typedef  void (*PF)(int,int);
//    PF pf = swap;
//    pointerMethodParam(pf);
//
//    method_pointer_test();
}

/**
 * 函数指针作为参数
 * 或者使用函数指针  别名作为参数
 * @param pf
 */
//void PointerTest::pointerMethodParam(void (*pf)(int,int)) {
void PointerTest::pointerMethodParam(PointerTest::PF pf) {
    pf(10, 23);
}

//函数指针作为返回值
PointerTest::PF PointerTest::swap_change(int a, int b) {
    //PointerTest::swap(a,b);
    return PointerTest::swap;
}

void PointerTest::swap_value(int a, int b) {
    cout << "a::" << a << ",,b：：" << b << "\n";
}
