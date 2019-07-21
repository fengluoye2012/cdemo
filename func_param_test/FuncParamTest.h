//
// Created by 风落叶 on 2019-07-21.
//

#ifndef CDEMO_FUNCPARAMTEST_H
#define CDEMO_FUNCPARAMTEST_H

#include "iostream"

using namespace std;

class FuncParamTest {

public:
    template<class T>
    void swap(T &&a, T &&b);

    template<typename T>
    T change(const T &&val);

};


/**
 * 右值引用作为参数
 *
 * 模版函数(相当于Java的泛型)  可以指定任何名称
 * @tparam T
 * @param a
 * @param b
 */
template<class T>
void FuncParamTest::swap(T &&a, T &&b) {
    T tem(std::move(a));
    a = std::move(b);
    b = move(tem);

    cout << "a==" << a << ",,b==" << b << "\n";
}


/**
 * 函数模版，参数和返回值都是泛型，参数是右值引用
 * @tparam FENG
 * @param val
 * @return
 */
template<typename FENG>
FENG FuncParamTest::change(const FENG &&val) {
    return val + 10;
}

#endif //CDEMO_FUNCPARAMTEST_H
