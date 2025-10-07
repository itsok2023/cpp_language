// Multiple Inheritance

#include <iostream>
#include <string.h>

using namespace std;

// Class 1st
class Base1
{
    protected:
    int num1;

    public:

    // Default Constructor
    Base1()
    {
        num1 = 0;
    }

    // Parameterized Constructor
    Base1(int num1)
    {
        this->num1 = num1;
    }

    // Getter
    int GetValue1()
    {
        return num1;
    }

    // Setter
    void SetValue1(int num1)
    {
        this -> num1 = num1;
    }

    // Display
    void DisplayValue1()
    {
        cout<<"\nThe value of num1 is : "<< num1;
    }

};

// Class 2nd
class Base2
{
    protected:
    int num2;

    public:

    // Default Constructor
    Base2()
    {
        num2 = 0;
    }

    // Parameterized Constructor
    Base2(int num2)
    {
        this->num2 = num2;
    }

    // Getter
    int GetValue2()
    {
        return num2;
    }

    // Setter
    void SetValue2(int num2)
    {
        this -> num2 = num2;
    }

    // Display
    void DisplayValue2()
    {
        cout<<"\nThe value of num2 is : "<< num2;
    }

};

//Addition of 2 numbers

class Add2Obj: public Base1, public Base2
{
    private:
    int add;

    public:

    // Default Constructor
    Add2Obj()
    {
        add = 0;
    }

    // Parameterize Constructor
    Add2Obj(int num1, int num2): Base1(num1), Base2(num2)
    {
        this->add = 0; 
    }

    // Addition Function
    void AddValue()
    {
        add = num1 + num2;
    }

    //Display
    void DisplayAdd()
    {
        cout<<"\nAddition is : "<< add;

    }


};


int main()
{
    // Create an object of Add2Obj using the parameterized constructor
    Add2Obj obj(10, 20);

    // Perform the addition
    obj.AddValue();

    // Display the values from the base classes
    obj.DisplayValue1(); // From Base1
    obj.DisplayValue2(); // From Base2

    // Display the result from the derived class
    obj.DisplayAdd();    // From Add2Obj

    return 0;
}