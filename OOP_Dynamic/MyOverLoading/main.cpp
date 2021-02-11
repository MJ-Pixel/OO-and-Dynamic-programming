#include <iostream>
#include "printdata.h"

using namespace std;

int main()
{
    int kokonaisluku = 10;
    double desimaali = 1.234;
    char* merkki = "kukkuruu";

    PrintData olioPrintData;
    olioPrintData.print(kokonaisluku);
    olioPrintData.print(desimaali);
    olioPrintData.print(merkki);

    return 0;
}
