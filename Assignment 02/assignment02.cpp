// CPP PROGRAM WITHOUT CONSTRUCTOR

#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
    int age;
    char name [20];
public:
    void ScanData (int age, const char *name)
    {
        this-> age = age;
        strcpy( this -> name, name);
    }

    void display ()
    {
        cout<<"\nAge is : "<<age;
        cout<< "\nName is : "<< name;
    }
   
};



int main ()
{
    Person p;
    p.ScanData(30, "Omkar");
    p.display();
    return 0;
}