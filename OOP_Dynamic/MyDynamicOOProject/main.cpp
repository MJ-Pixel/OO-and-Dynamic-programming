#include "mydynamicclass.h"
#include <iostream>


using namespace std;

int main()
{
    // Määritellään MyDynamicClass tyyppinen osoitin *objectMyDynamicClass
    // Osoittimelle varataan muistia pinosta
    MyDynamicClass *objectMyDynamicClass;
    cout << "Osoittimien *objectMyDynamicClass muistiosoite pinossa: " << &objectMyDynamicClass << endl;
    // Luodaan olio ja varataan oliolle muistia new operaattorilla.
    // New palauttaa muistiosoitteen ja varaa muistia keosta (Heapista, vapaasta muistista).
    // Muistia varataan luokan jäsenmuuttujien tyyppien mukaan. short 2 tavua, int 4 tavua jne.
    objectMyDynamicClass = new MyDynamicClass;
    objectMyDynamicClass->myDynamicMemberFunction();
    // Tuhotaan olio ja vapautetaan olion varaama muistitila.
    // Asetetaan osoittimen arvoksi nullptr (jossain järjestelmissä NULL tai 0), jotta muisti on näin siivottu ohjelmoijan toimesta.
    delete objectMyDynamicClass;
    objectMyDynamicClass = nullptr; // luokan jäsenmuuttujien muistiosoitteet saavat arvon NULL tai 0. Näin pidetään muisti siistinä!

   // objectMyDynamicClass->myDynamicMemberFunction();
    return 0;

}
