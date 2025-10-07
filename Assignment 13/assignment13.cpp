// Polymorphism -  Dynamic Polymorphism, Late Binding, Run Time Polymorphism, Overriding

#include <iostream>
#include <string.h>

using namespace std;

// Class Base
class Base
{
protected:
    char name[20];

public:

    virtual void greetUser(const char *name)
    {
        cout<<"\nFrom Base - Welcome, How are you "<<name;
    }
    
};

// Class Derived
class Derived: public Base
{

public:

    void greetUser(const char *name)
    {
        cout<<"\nFrom Derived - Hello, Good Morning "<<name;
    }
};


int main()
{
    // Using Resolution Operator
    cout<<"\nUsing Resolution Operator\n";
    Derived obj1;
    obj1.greetUser("Rohit");
    obj1.Base::greetUser("Virat");

    // Using Pointer
    cout<<"\n\nUsing Pointer\n";
    Derived obj2;
    Base *ptr;
    ptr = &obj2;

    (*ptr).greetUser("Dhoni");

    return 0;
}