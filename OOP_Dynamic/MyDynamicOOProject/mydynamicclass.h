#ifndef MYDYNAMICCLASS_H
#define MYDYNAMICCLASS_H
#include <iostream>
using namespace std;

class MyDynamicClass
{
public:
    MyDynamicClass();
   ~MyDynamicClass();

    void myDynamicMemberFunction();

private:
    short myMemberVariable;

};

#endif // MYDYNAMICCLASS_H
