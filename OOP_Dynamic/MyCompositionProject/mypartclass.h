#ifndef MYPARTCLASS_H
#define MYPARTCLASS_H
#include <iostream>

using namespace std;

class MyPartClass
{
public:
    MyPartClass();
    ~MyPartClass();
    void myPartClassFunction();
    short mySecondPartClassFunction();


private:
    short myPartClassVariable;
};

#endif // MYPARTCLASS_H
