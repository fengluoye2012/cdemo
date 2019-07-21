# cdemo

用来练习C++，c语言的Demo

1:template(模版)的使用；
分为：函数模版和类模版樱的最为广泛；
https://www.cnblogs.com/Hwangzhiyoung/p/8624369.html
深入理解模版
https://blog.csdn.net/lezardfu/article/details/56852043

2：继承的深入理解；https://www.cnblogs.com/33debug/p/6666939.html;
分为共有继承（public）、私有继承（private）、保护继承（protected）

3：函数 https://www.cnblogs.com/oldyogurt/p/9109774.html
1)构造函数：https://blog.csdn.net/wang13342322203/article/details/80807676
1.1)构造函数:
1.2)拷贝构造函数
1.3)析构函数）
2）函数:
3）虚函数:



4：typedef: https://www.cnblogs.com/charley_yang/archive/2010/12/15/1907384.html
1)定义一种类型的别名，而不只是简单的宏替换。可以用作同时声明指针型的多个对象
2)为复杂的声明定义一个新的简单的别名。(难点)；
方法是：在原来的声明里逐步用别名替换一部分复杂声明，如此循环，把带变量名的部分留到最后替换，得到的就是原声明的最简化版。
https://www.cnblogs.com/seventhsaint/archive/2012/11/18/2805660.html


6、const关键字  https://blog.csdn.net/Eric_Jo/article/details/4138548
1）用于定义常量：只能被访问，不能不修改；
2）便于进行类型检查：对方法中传入的参数进行类型检查，不匹配的进行提示；同时在函数体内只读，不能被修改，具有常量的性质；
3）函数重载：

7、作用域符（::):为了更明确的调用你想要的变量；https://blog.csdn.net/qq_33266987/article/details/53689133
1）global scope(全局作用域符），用法（::name)
2）class scope(类作用域符），用法(class::name)
3）namespace scope(命名空间作用域符），用法(namespace::name)

作用域符号::的前面一般是类名称，后面一般是该类的成员名称。

8、list的用法 https://blog.csdn.net/lskyne/article/details/10418823；

9、指针：变量指针，二级指针，指针类型的数据，函数指针（难点）

10、多线程：https://blog.csdn.net/ouyangfushu/article/details/80199140
1）join()：主线程等待子线程运行结束后，才执行下一步；串行
2）detach()：独立于主线程并发执行，主线程后续代码无需等待；

10:指针 https://blog.csdn.net/soonfly/article/details/51131141
* 取地址符；&
1）指针（一级指针）：
2）函数指针：
2）二级指针：
3）函数指针（重点）：https://www.cnblogs.com/lvchaoshun/p/7806248.html
https://blog.csdn.net/qq_35618527/article/details/76796707
3.1)类成员函数指针；
https://www.runoob.com/w3cnote/cpp-func-pointer.html
3.1)成员函数指针：https://blog.csdn.net/shaosunrise/article/details/83795230

3.2)使用函数指针的好处：真正的函数指针的使用可以将实现同一功能的很多个模块统一起来标识，
这样一来更容易后期的维护，系统结构更加清晰。或者归纳为：便于分层设计、利于系统抽象、降低耦合度以及使接口与实现分开。

3.3)Null 指针；是一个定义在标准库中的值为零的常量
在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，
它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。

11：函数重载
函数重载是指在同一作用域内，可以有一组具有相同函数名，不同参数列表的函数，这组函数被称为重载函数。
重载函数通常用来命名一组功能相似的函数，这样做减少了函数名的数量，避免了名字空间的污染，对于程序的可读性有很大的好处。


12：new/delete 关键字
new关键字：通过new 关键字进行动态内存申请，内存分配是基于类型进行的；
delete关键字：用于内存释放
https://blog.csdn.net/qq_40416052/article/details/82493916

13:引用，引用 vs 指针
1）引用变量是一个别名，对引用的操作与对变量直接操作完全一样

也就是说，它是某个已存在变量的另一个名字，一旦把引用初始化为某个变量
就可以使用引用名称或者变量名称来指向变量；
https://www.cnblogs.com/duwenxing/p/7421100.html
左值引用和右值引用：
左值：左值是可以放在赋值号左边可以被赋值的值；左值必须要在内存中有实体；
右值：右值当在赋值号右边取出值赋给其他变量的值；右值可以在内存也可以在CPU寄存器。
一个对象被用作右值时，使用的是它的内容(值)，被当作左值时，使用的是它的地址。

https://blog.csdn.net/xiongya8888/article/details/83998574
https://blog.csdn.net/xuyuqingfeng953/article/details/51058236；
1）左值引用：通过&获得左值引用，左值引用只能绑定左值。
2) 右值引用：https://www.cnblogs.com/likaiming/p/9045642.html
https://blog.csdn.net/china_jeffery/article/details/78520237
3) 移动语义move,右值引用折叠,右值引用类型推断；、

14、函数传参：https://blog.csdn.net/u012814856/article/details/83410552
- 按值传参：函数接收到了传递过来的参数后，将其拷贝一份，其函数内部执行的代码操作的都是传递参数的拷贝；
           也就是说，按值传参最大的特点就是不会影响到传递过来的参数的值，但因为拷贝了一份副本，会更浪费资源一些。
- 按（左值）引用传参：当我们想要对传入参数进行一些修改的时候，按（左值）引用传参绝对是最适合的。
- 按常量引用传参：既拥有引用的节省拷贝开支的优点，又拥有按值传参的不影响原值的优点；
- 按右值引用传参：

精确传递（右值引用的使用）：在参数传递过程中，所有这些属性和参数值都不能改变。

尽管按值传参大部分情况下都能够使用，但是合适的情况下使用合适的传参方式体现了我们对于 C++ 的理解深度。

Java中的传递方式？？https://blog.csdn.net/javazejian/article/details/51192130
1)一个方法不能修改基本数据类型的参数（int,boolean）;
2)一个方法可以修改引用数据类型的参数（String，类，接口）；
3）上述两种都进行值拷贝过程；

15、复杂泛型配合右值引用的使用等；
