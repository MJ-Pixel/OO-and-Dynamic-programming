#include "mysecondclass.h"
#include <iostream>
using namespace std;
int main()
{
        MySecondClass objectMySecondClass(8); // kun olio luodaan kutsutaan muodostinfunktiota, jos sellainen on luokassa
        cout << "Olion objectMySecondClass, jasenmuuttuja myVariable arvo=" << objectMySecondClass.getValue() << endl;
        objectMySecondClass.setValue(5); // asetetaan olion jäsenmuuttujalle uusi arvo
        cout << "Olion objectMySecondClass, jasenmuuttuja myVariable UUSI arvo=" << objectMySecondClass.getValue() << endl;

        MySecondClass objectTest(99); // toinen olio luokasta MySecondClass
        cout << "Olion objectTest, jasenmuuttuja myVariable arvo=" << objectTest.getValue() << endl;

        objectMySecondClass.showObjectMemoryAddress();
        objectTest.showObjectMemoryAddress();
        return 0;
} // kun olio tuhoutuu, niin kutsutaan tuhoajafunktiota, jos sellainen on luokassa
