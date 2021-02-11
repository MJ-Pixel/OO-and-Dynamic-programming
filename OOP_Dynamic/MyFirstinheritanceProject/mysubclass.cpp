#include "mysubclass.h"

MySubClass::MySubClass() : mySubMemberVariable(100)
{
        cout<<"MySubClass muodostinfunktio"<<endl;
        cout<<"MySubMemberVariable arvo on = "<<mySubMemberVariable<<endl;
        myParentMemberVariable = 200;

}
MySubClass::~MySubClass()
{
        cout<<"MySubClass tuhoaja funktio"<<endl;
}
