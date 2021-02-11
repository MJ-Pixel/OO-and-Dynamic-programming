#include "mysubclass.h"


int main()
{
    MySubClass * objectMySubClass = new MySubClass;
    //objectMySubClass->myParentMemberFunction();
    objectMySubClass->myBaseFunctionOne();

    delete objectMySubClass;
    objectMySubClass = nullptr;

    return 0;
}
