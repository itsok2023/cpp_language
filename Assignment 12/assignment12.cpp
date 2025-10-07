// Polymorphism - Static Polymorphism,  Overloading, Compile time Polymorphism, Early Binding

#include <iostream>
#include <string.h>

using namespace std;

class Base
{
private:
    char name[20];
    char Surname[20];

public:

void greetUser(const char *name)
{
    cout<<"\nWelcome "<<name;
}

void greetUser(const char *name, const char *Surname)
{
    cout<<"\nHello "<<name<<" "<< Surname;
}

};

int main()
{
    Base obj1;

    obj1.greetUser("Virat");
    obj1.greetUser("Virat", "Kohli");

    return 0;
}