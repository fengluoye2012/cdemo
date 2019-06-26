//
// Created by wjw on 2019-06-24.
//

#ifndef CTEST_TEMPLATETEST_H
#define CTEST_TEMPLATETEST_H

/**
 * 为什么要定义模版
 * 类型程序设计中，参与运算的所有对象的类型在编译时即确定下来，并且编译程序将进行严格的类型检查。为了解决强类型的严格性和灵活性的冲突。有以下3种方式解决：
 * 1）带参数宏定义（原样替换）
 * 2）重载函数（函数名相同，函数参数不同）
 * 3）模板（将数据类型作为参数）
 * 模板的使用中函数模板、类模板用的最广最繁。
 * @tparam T
 */
template<typename T>

class TemplateTest {
protected:
    T a;
    T b;

public:
    TemplateTest();

    TemplateTest(T a, T b);

    //析构函数
    ~TemplateTest() {
    }

    T getA() const;

    void setA(T a);

    T getB() const;

    void setB(T b);

    TemplateTest<T> operator+(TemplateTest &tem);
};


/**
 * 模版
 * @tparam T
 */
template<typename T>
TemplateTest<T>::TemplateTest() {}

template<typename T>
TemplateTest<T>::TemplateTest(T a, T b):a(a), b(b) {}


/**
 * 函数模板
 * 定义：
 * template <模板参数表>
 * 返回类型 函数名 （参数列表）{
 *   //函数体
 * }
 * 注：class或typename修饰的类型参数，代表一种类型；非类型参数表达式，可以是int，long，long long类型，使用已知类型符，代表一个常量
 */
template<typename T>
TemplateTest<T> TemplateTest<T>::operator+(TemplateTest &tem) {
    TemplateTest<T> after(this->a += tem.a, this->b += tem.b);
    return after;
}

template<typename T>
T TemplateTest<T>::getA() const {
    return a;
}

template<typename T>
void TemplateTest<T>::setA(T a) {
    TemplateTest::a = a;
}

template<typename T>
T TemplateTest<T>::getB() const {
    return b;
}


template<typename T>
void TemplateTest<T>::setB(T b) {
    TemplateTest::b = b;
}


#endif //CTEST_TEMPLATETEST_H
