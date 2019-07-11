//
// Created by 风落叶 on 2019-07-11.
//

#ifndef CDEMO_BIRDACTION_H
#define CDEMO_BIRDACTION_H

/**
 * 接口是一系列抽象方法的声明，是一些方法特征的集合，这些方法都应该是抽象的，需要由具体的类去实现，
 * 然后第三方就可以通过这组抽象方法调用，让具体的类执行具体的方法。
 *
 * 1、接口类中不应该声明成员变量，静态变量。
 * 2、可以声明静态常量作为接口的返回值状态，需要在对应的cpp中定义并初始化，访问时需要使用"接口类型::静态常量名"访问
 * 2、定义的接口方法使用virtual 修饰符 和 “=0” 修饰，表示该方法是纯虚的。
 * 3、因为接口类是无法创建对象的，所以不应该编写构造函数和析构函数
 *
 * 严格的说只能算作抽象类；
 */
class Action {

public:
    //纯虚函数
    virtual  void action()=0;

    //静态常量
    static const  int TIME;

};


#endif //CDEMO_BIRDACTION_H
