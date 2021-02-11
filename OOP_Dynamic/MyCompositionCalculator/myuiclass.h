#ifndef MYUICLASS_H
#define MYUICLASS_H
#include <iostream>
#include"mycalculationclass.h"
using namespace std;


class MyUiClass
{
public:
    MyUiClass();
    ~MyUiClass();
    void inputNumbers();
    void showMenu();
    void showResult(short parameter);



private:
    MyCalculationClass objectMyCalculationClass;
    double numberOne, numberTwo, result;

};

#endif // MYUICLASS_H
