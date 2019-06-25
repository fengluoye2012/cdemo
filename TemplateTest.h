//
// Created by wjw on 2019-06-24.
//

#ifndef CTEST_TEMPLATETEST_H
#define CTEST_TEMPLATETEST_H

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
 * 模版类的使用
 * 调用TemplateTest<T>::operator+方法，参数为 TemplateTest 指针；返回值：TemplateTest<T>对象；
 * @tparam T
 * @param tem
 * @return
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
