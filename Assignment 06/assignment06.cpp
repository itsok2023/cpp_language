// Dynamic Memory and Destructors

#include <iostream>
#include <string.h>

using namespace std;

class Person {

    // Pointers
    int *age;
    char *name;

    public:

    // Default Constructor
    Person()
    {
       age = new int (0);
       name = new char[3];
       strcpy(name, "NA");
    }

    // Parameterize Constructor
    Person(int age, const char *name)
    {
        this->age = new int(age);
        int len = strlen(name);
        this->name = new char[len+1];
        strcpy(this->name, name);
    }

    // Display
    void display()
    {
        cout<<"\nAge is : "<< *age;
        cout<<"\nName is : "<< name;
    }

    //Destructor
    ~Person()
    {
        delete age;
        delete [] name;
    }

};

int main()
{
    Person p1;
    p1.display();
    Person p2(3,"Omkar");
    p2.display();

    return 0;
}