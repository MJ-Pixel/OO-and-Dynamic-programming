#include <iostream>
#include"mycalculationclass.h"
#include"myuiclass.h"

using namespace std;

int main()
{

        MyUiClass *objectMyUiClass;             //dynaaminen olio, kekomuisti
        objectMyUiClass = new MyUiClass;
        objectMyUiClass->showMenu();

        delete objectMyUiClass;                //tyhjennetään kun ei käytetä ja nollataan
        objectMyUiClass = nullptr;

    return 0;
}
