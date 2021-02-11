#include "myfirstsubclass.h"

MyFirstSubClass::MyFirstSubClass()
{
    setValue(10);
    myParentProtectedMemberVariable = 11;
    cout<<"myParProMemVar arvo on "<<myParentProtectedMemberVariable<<endl;
}
MyFirstSubClass::~MyFirstSubClass()
{

}
