#include "myparentclass.h"

MyParentClass::MyParentClass()
{
        cout<<"MyParentClass muodostin funktio"<<endl;
       // myParentMemberVariable = 10;
}
MyParentClass::~MyParentClass()
{
        cout<<"MyParentClass tuhoaja funktio"<<endl;
}

void MyParentClass::myParentMemberFunction()
{
    cout<<"MyParentClass luokan jasenfunktio myParentMemberFunction()"<<endl;
    cout<<"myParentMemberVariable arvo ="<<myParentMemberVariable<<endl;
}
