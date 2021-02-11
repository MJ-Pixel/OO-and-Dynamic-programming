#include "standardcalculator.h"
#include <iostream>
using namespace std;

void StandardCalculator::summa()
{
    tulostus("+", kokonaisLuku1 + kokonaisLuku2);
}

void StandardCalculator::erotus()
{
    tulostus("-", kokonaisLuku1 - kokonaisLuku2);
}

void StandardCalculator::tulo()
{
    tulostus("*", kokonaisLuku1 * kokonaisLuku2);
}

void StandardCalculator::osamaara()
{
    tulostus("/",kokonaisLuku1 / kokonaisLuku2);
}
void StandardCalculator::tulostus(char*merkki, short luku)
{
    cout<<kokonaisLuku1<<merkki<<kokonaisLuku2<<"="<<luku<<endl;
}
