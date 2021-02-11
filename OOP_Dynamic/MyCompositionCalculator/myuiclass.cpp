#include "myuiclass.h"

MyUiClass::MyUiClass()
{
}
MyUiClass::~MyUiClass()
{

}

void MyUiClass::inputNumbers()
{
    cout << "Anna luku yksi:";
    cin >> numberOne; // cin oliolla voidaan pyytaa kayttajaa syottamaan muuttujalle arvo
    cout << "Anna luku kaksi:";
    cin >> numberTwo;
}
void MyUiClass::showResult(short parameter)
{

    cout<<"laskutoimitus ja tulos"<<endl;
    cout<<numberOne;
    switch (parameter) {
    case 1:
        cout<<"+";
        break;
    case 2:
        cout<<"-";
        break;
    case 3:
        cout<<"*";
        break;
    case 4:
        cout<<"/";
        break;
    default:
        break;
    }
    cout<<numberTwo<<"="<<result;

}

void MyUiClass::showMenu()
{
    short menuVariable;
    while (menuVariable != 5)
    {

    cout<<"NELILASKIN"<<endl;
    cout<<"============"<<endl;
    cout<<"1 = Summa"<<endl;
    cout<<"2 = Erotus"<<endl;
    cout<<"3 = Tulo"<<endl;
    cout<<"4 = Osamaara"<<endl;
    cout<<"5 = Lopeta"<<endl;
    cout<<"Valinta ="<<endl;
    cin >> menuVariable; // menuVariable on short tyyppinen paikallinen muuttuja
    if ( menuVariable != 5)
    {
    inputNumbers();


    switch(menuVariable)
    {
    case 1:
        result = objectMyCalculationClass.summa(numberOne, numberTwo);
        break;
    case 2:
        result = objectMyCalculationClass.erotus(numberOne, numberTwo);
        break;
    case 3:
        result = objectMyCalculationClass.tulo(numberOne, numberTwo);
        break;
    case 4:
        result = objectMyCalculationClass.osamaara(numberOne, numberTwo);
        break;

    }

    showResult(menuVariable);
    }
    }
}





