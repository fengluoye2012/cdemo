//
// Created by wjw on 2019-07-03.
//

#ifndef CDEMO_POINTERTEST_H
#define CDEMO_POINTERTEST_H

/**
 * 指针：
 * 从变量名处起,根据运算符优先级结合,一步一步分析.
 * 需要明白四个概念：
 * 指针的类型、指针所指向的类型、指针的值或者叫指针所指向的内存区、指针本身所占据的内存区
 */

class PointerTest {
private:
    //int 类型的变量；
    int p;
    //int 类型的指针；
    int *p1;

    //int 类型的数组；
    int p2[3] = {1, 2, 3};

    //int 类型指针组成的数组；
    int a = 1;
    int b = 2;
    int c = 3;
    int *p3[3] = {&a, &b, &c};

    //int 类型数组的指针，执向三个元素的数组；如何初始化；
    int (*p4)[3];

    //int 类型的二级指针；
    int **p5;

    //从P处起,先与()结合,说明P 是一个函数,然后进入()里分析,说明该函数有一个整型变量的参数,然后再与外面的int 结合,说明函数的返回值是一个整型数据
    //参数是int 类型，返回值也是int 类型的函数；
    int p6(int);

    //指向 参数是int类型，返回值也是int类型的函数 指针；
    int (*p7)(int);

public:
    void pointer_test();

    void array_pointer_test();

    void pointer_arr_test();

    static void swap(int a, int b);

    typedef void (*PF)(int, int);

    PF swap_change(int a,int b);

    void method_pointer_test();

    void pointerParam(int *a);

    //定义别名

    void pointerMethodParam(PF pf);


};


#endif //CDEMO_POINTERTEST_H
