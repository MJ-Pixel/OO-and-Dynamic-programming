#include "mysecondclass.h"
#include <iostream>
using namespace std;

MySecondClass::MySecondClass()
{
    cout << "Luokasta MySecondClass luotiin olio" << endl;
    myVariable = 10; // asetetaan muuttujan alkuarvo
}

MySecondClass::~MySecondClass()
{
myVariable = 0;
cout << "Luokan MySecondClass olio tuhottiin" << endl;
}
void MySecondClass::setValue(short parameterValue)
{
myVariable=parameterValue;
}
short MySecondClass::getValue()
{
return myVariable;
}
MySecondClass::MySecondClass(short parameter)
{
cout << "Luokasta MySecondClass luotiin olio" << endl;
cout << "Muodostinfunktion parametrin arvo = " << parameter << endl;
myVariable = parameter;
}

void MySecondClass::showObjectMemoryAddress()
{
    cout << "Muuttujan myVariable muistiosoite pinossa: " << &myVariable << endl;
}

