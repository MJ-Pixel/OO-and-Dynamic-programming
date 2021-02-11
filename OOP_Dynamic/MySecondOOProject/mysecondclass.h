#ifndef MYSECONDCLASS_H
#define MYSECONDCLASS_H


class MySecondClass
{
public:
    MySecondClass();
    ~MySecondClass();
    MySecondClass(short parameter);

    void setValue(short parameterValue);
    short getValue();
    void showObjectMemoryAddress();

private:
    short myVariable;
};

#endif // MYSECONDCLASS_H
