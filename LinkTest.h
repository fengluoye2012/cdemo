//
// Created by wjw on 2019-06-25.
//

#ifndef CDEMO_LINKTEST_H
#define CDEMO_LINKTEST_H

#include "list"
#include "Freshman.h"
using namespace std;
using std::list;

//定义别名
typedef list<Freshman> FRESHMANLIST;
/**
 * 链表
 */
class LinkTest {

protected:
    FRESHMANLIST list;

public:
    LinkTest();

//    LinkTest(FRESHMANLIST* list);

    void  add(Freshman freshman);

    void get();

    void deleteNode();

};


#endif //CDEMO_LINKTEST_H
