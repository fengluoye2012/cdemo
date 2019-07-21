//
// Created by 风落叶 on 2019-07-20.
//

#ifndef CDEMO_REFERENCETEST_H
#define CDEMO_REFERENCETEST_H


class ReferenceTest {

public:
    int right_ref;

    ReferenceTest();

    void understandReference();

    void swap(int &a, int &b);

    void arrFunc(int arr[10]);

    void change(const int &a);

    float &returnFunc(float r);

    void rightReference();

    void moveTest();

    int swap_change(int &&b);
};


#endif //CDEMO_REFERENCETEST_H
