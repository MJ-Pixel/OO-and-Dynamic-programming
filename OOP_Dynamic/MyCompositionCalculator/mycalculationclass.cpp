#include "mycalculationclass.h"

MyCalculationClass::MyCalculationClass()
{



}
MyCalculationClass::~MyCalculationClass()
{

}
double MyCalculationClass::summa(double parameterOne, double parameterTwo)
{
    double result = parameterOne + parameterTwo;
    return result;
}
double MyCalculationClass::erotus(double parameterOne, double parameterTwo)
{
   double result = parameterOne - parameterTwo;
   return result;
}
double MyCalculationClass::tulo(double parameterOne, double parameterTwo)
{
   double result = parameterOne * parameterTwo;
   return result;
}
double MyCalculationClass::osamaara(double parameterOne, double parameterTwo)
{
   double result = parameterOne / parameterTwo;
   return result;
}


