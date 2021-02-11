#include "mycompositionclass.h"


MyCompositionClass::MyCompositionClass()
{
    cout<<"MyCompositionClass muodostinfunktio"<<endl;
    objectMyPartClass = new MyPartClass;
    objectMyPartClass->myPartClassFunction();
    cout << "Osaluokan jasenmuuttuja myPartClassVariable = "<< objectMyPartClass->mySecondPartClassFunction() << endl;

    /*objectMyPartClass.myPartClassFunction();
    cout << "Osaluokan jasenmuuttuja myPartClassVariable = "<< objectMyPartClass. mySecondPartClassFunction() << endl;
    */
}
MyCompositionClass::~MyCompositionClass()
{
    cout<<"MyCompositionClass tuhoajafunktio"<<endl;
    delete objectMyPartClass;
    objectMyPartClass = nullptr;
}
