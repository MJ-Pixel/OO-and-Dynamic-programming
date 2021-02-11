#include "mydynamicclass.h"
#include <iostream>
using namespace std;

MyDynamicClass::MyDynamicClass()
{
        cout<<"Olio luotiin"<<endl;
        myMemberVariable = 15;
        cout << "Luokan jasenmuuttujan myMemberVariable muistiosoite kekomuistissa: "<< &myMemberVariable << endl;
}

MyDynamicClass::~MyDynamicClass()
{
        cout<<"olio tuohttiin"<<endl;
        myMemberVariable = 0;
}

void MyDynamicClass::myDynamicMemberFunction()
{
      //myMemberVariable=10;

        cout<<"memberifunctiossa ollaan"<<endl;
      //cout << &myMemberVariable << endl;
}
