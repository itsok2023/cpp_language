//Encapsulation with Getters and Setters

#include <iostream>
#include <string.h> // For strcpy


using namespace std;

class Person
{
private:
    int age;
    char name[20];

public:
    // Default Constructor
    Person()
    {
        age = 1;
        strcpy(name, "NA");
    }

    // Parameterized Constructor
    Person(int age, const char *name)
    {
        this->age = age;
        strcpy(this->name, name);
    }


    void SetAge(int age)
    {
        this->age = age;
    }

   
    void SetName(const char *name)
    {
        strcpy(this->name, name);
    }

   
    int GetAge()
    {
        return age;
    }


    const char* GetName()
    {
        return name;
    }

   
    void display()
    {
        cout << "\nAge is : " << age;
        cout << "\nName is : " << name << endl;
    }
};

int main()
{
    // Create a Person object using the default constructor
    Person p1;
    cout << "--- Initial Default Values ---";
    p1.display();

    // Use setters to change the object's data
    p1.SetAge(20);
    p1.SetName("Omkar");

    cout << "\n--- Values After Using Setters ---";
    p1.display();

    // Use getters to retrieve and print the data
    cout << "\n--- Retrieving Values with Getters ---";
    cout << "\nRetrieved Age: " << p1.GetAge();
    cout << "\nRetrieved Name: " << p1.GetName() << endl;

    return 0;
}