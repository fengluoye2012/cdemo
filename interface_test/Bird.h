//
// Created by 风落叶 on 2019-07-11.
//

#ifndef CDEMO_BIRD_H
#define CDEMO_BIRD_H


#include "Action.h"

class Bird : public Action {

public:

    //构造函数
    Bird();

    //析构函数
    ~Bird();

    void action() override;

};


#endif //CDEMO_BIRD_H
