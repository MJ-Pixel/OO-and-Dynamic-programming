#include<myparentclass.h>
#include<mysecondsubclass.h>
#include<myfirstsubclass.h>

int main()
{
    MyFirstSubClass objectMyFirstSubclass;
    MySecondSubClass objectMySecondSubclass;

    cout<<objectMyFirstSubclass.getValue()<<endl;
    cout<<objectMySecondSubclass.getValue()<<endl;


}
