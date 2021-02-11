#ifndef STANDARDCALCULATOR_H
#define STANDARDCALCULATOR_H
#include <iostream>
using namespace std;

class StandardCalculator
{
public:
   void summa();
   void erotus();
   void tulo();
   void osamaara();
   void tulostus(char* merkki, short luku);

private:
        short kokonaisLuku1 = 10;
        short kokonaisLuku2 = 5;

};

#endif // STANDARDCALCULATOR_H
