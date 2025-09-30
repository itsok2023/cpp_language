// CPP PROGRAM WITH DEFAULT CONSTRUCTOR AND PARAMETERIZED CONSTRUCTOR

#include <iostream> 
#include <string.h>

using namespace std;

// Class
class person
{
private:
    // Data Members
    int age;
    char name [20];

public:

    // Methods, Function, Member Function

    // Default Constructor
    person()
    {
        age = 1;
        strcpy(name, "ABC");
    }

    // Parameterize Constructor
    person(int age, const char *name)
    {
        this -> age = age;
        strcpy(this -> name, name);
    }

    // Display Function
    void display ()
    {
        cout<<"\nAge is : "<< age;
        cout<<"\nName is : "<< name;
    }

    
};

int main()
{
    // Creating Object
    person p;
    p.display();

    // Creating Object and Passing Arguments
    person p1(21, "Omkar");
    p1.display();

    return 0;
}
