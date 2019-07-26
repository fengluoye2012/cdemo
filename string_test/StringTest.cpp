//
// Created by wjw on 2019-07-26.
//

#include "iostream"
#include "StringTest.h"
#include "string"

using namespace std;
using std::string;

/**
 * 初始化string
 */
void StringTest::initStr() {
    //1
    string str("hello");

    //2
    string str_world = string("world");

    //3
    string string1 = string("hello world", 0, 5);
    //4
    char a = 'a';
    string str_length = string(10, a);

    string str_1 = string("hello");

    bool b = string1 == str_length;
    //true
    bool b_01 = str == str_1;
    if (b) {
        cout << "b==" << true << "\n";
    }

    if (b_01) {
        cout << "b_01==" << true << "\n";
    }

    cout << "str==" << str << ",,sizeof::" << sizeof(str_world) << "\n";
    bool empty = str.append("hhhh").empty();
    int strLen = str.length();

    cout <<"str:"<<str<< "，，strLen::" << strLen << "\n";


}
