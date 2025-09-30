// Data Validation in Classes

#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
    int age;
    char name[20];

public:

    //Default Constructor
    Person()
    {
        age = 1;
        strcpy(name, "NA");
    }

    // Parameterized Constructor
    Person(int age, const char *name)
    {
        if (isAgeValid(age))
        {
            this -> age = age;
        }
        else
        {
            cout<<"\nEnter Valid age";
            this->age = 1;
        }

        if (isNameValid(name))
        {
            strcpy(this ->name, name);
        }
        else
        {
            cout<<"\nEnter Valid Name";
            strcpy(this->name, "NA");
        }
        

    }

    //Setter of Age
    void SetAge(int age)
    {
        if (isAgeValid(age))
        {
            this -> age = age;
        }
        else
        {
            cout<<"\nEnter Valid age";
        }
    }

    //Setter of Name
    void SetName(const char* name)
    {
        if (isNameValid(name))
        {
            strcpy(this->name, name);
        }
        else
        {
            cout<<"\nEnter Valid Name";
        }
        
    }



    // Getter of Age
    int GetAge()
    {
        return age;
    }

    // Getter of Name
    const char* GetName()
    {
        return name;
    }

    //Display
    void display()
    {
        cout<<"\nAge is : "<<age;
        cout<<"\nName is : "<<name;
    }

    // Validation of Age
    int isAgeValid(int age)
    {
        if (age>=0 && age<=100)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

    // Validation of Name
    int isNameValid(const char* name)
    {
       int i = 0;

       while (name[i] != '\0')
       {
        if (!((name[i]>= 'a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z')))
        {
            return 0;
        }

        i++;
        
       }
       
       return 1;
        
    }

};


int main(){

    cout << "--- 1. Testing Default Constructor ---" << endl;
    Person p1;
    p1.display();
    cout << "\n----------------------------------------------------------" << endl << endl;

    cout << "--- 2. Testing Parameterized Constructor (Valid Data) ---" << endl;
    Person p2(25, "Alice");
    p2.display();
    cout << "\n----------------------------------------------------------" << endl << endl;

    cout << "--- 3. Testing Parameterized Constructor (Invalid Age) ---" << endl;
    Person p3(150, "Bob"); // Age > 100 is invalid
    p3.display();
    cout << "\n----------------------------------------------------------" << endl << endl;
    
    cout << "--- 4. Testing Parameterized Constructor (Invalid Name) ---" << endl;
    Person p4(30, "Charlie123"); // Name with numbers is invalid
    p4.display();
    cout << "\n-----------------------------------------------------------" << endl << endl;

    cout << "--- 5. Testing Setters (Valid Data on p1) ---" << endl;
    cout << "p1 before setting:" << endl;
    p1.display();
    p1.SetName("David");
    p1.SetAge(40);
    cout << "\np1 after setting:" << endl;
    p1.display();
    cout << "\n-----------------------------------------------" << endl << endl;

    cout << "--- 6. Testing Setters (Invalid Data on p1) ---" << endl;
    cout << "Attempting to set invalid name 'Eve@' and age -5..." << endl;
    p1.SetName("Eve@");
    p1.SetAge(-5);
    cout << "\nValues of p1 after attempting invalid set (should be unchanged):" << endl;
    p1.display();
    cout << "\n-------------------------------------------------" << endl;
    
    return 0;
}
