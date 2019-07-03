# cdemo

用来练习C++，c语言的Demo

1:template(模版)的使用；
分为：函数模版和类模版樱的最为广泛；
https://www.cnblogs.com/Hwangzhiyoung/p/8624369.html
深入理解模版
https://blog.csdn.net/lezardfu/article/details/56852043

2：继承的深入理解；https://www.cnblogs.com/33debug/p/6666939.html;
分为共有继承（public）、私有继承（private）、保护继承（protected）

3：构造函数的写法
https://blog.csdn.net/baiyq369/article/details/54926983

4：typedef: https://www.cnblogs.com/charley_yang/archive/2010/12/15/1907384.html
1)定义一种类型的别名，而不只是简单的宏替换。可以用作同时声明指针型的多个对象
2)为复杂的声明定义一个新的简单的别名。(难点)；
方法是：在原来的声明里逐步用别名替换一部分复杂声明，如此循环，把带变量名的部分留到最后替换，得到的就是原声明的最简化版。
https://www.cnblogs.com/seventhsaint/archive/2012/11/18/2805660.html

5、函数传参：https://blog.csdn.net/u012814856/article/details/83410552
- 按值传参：函数接收到了传递过来的参数后，将其拷贝一份，其函数内部执行的代码操作的都是传递参数的拷贝；
           也就是说，按值传参最大的特点就是不会影响到传递过来的参数的值，但因为拷贝了一份副本，会更浪费资源一些。
- 按（左值）引用传参：当我们想要对传入参数进行一些修改的时候，按（左值）引用传参绝对是最适合的。
- 按常量引用传参：既拥有引用的节省拷贝开支的优点，又拥有按值传参的不影响原值的优点；

尽管按值传参大部分情况下都能够使用，但是合适的情况下使用合适的传参方式体现了我们对于 C++ 的理解深度。

Java中的传递方式？？https://blog.csdn.net/javazejian/article/details/51192130
1)一个方法不能修改基本数据类型的参数（int,boolean）;
2)一个方法可以修改引用数据类型的参数（String，类，接口）；
3）上述两种都进行值拷贝过程；

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

11：函数重载
函数重载是指在同一作用域内，可以有一组具有相同函数名，不同参数列表的函数，这组函数被称为重载函数。
重载函数通常用来命名一组功能相似的函数，这样做减少了函数名的数量，避免了名字空间的污染，对于程序的可读性有很大的好处。



