// Hybrid Inheritance

#include <iostream>
#include <string.h>

using namespace std;


class A{

    protected:
    int a;

    public:
    
    // Default Constructor
    A()
    {
        a = 0;
    }

    // Parameterize Constructor
    A(int a)
    {
        this -> a = a;
    }
    
};


class B: public virtual A
{
    protected:
    int b;

    public:

    // Default Constructor
    B()
    {
        b=1;
    }

    // Parameterize Constructor
    B(int b, int a): A(a)
    {
        this -> b = b;
    }
};

class C: virtual public A
{
    protected:
    int c;

    public:

    // Default Constructor
    C()
    {
        c = 2;
    }

    // Parameterize Constructor
    C(int c, int a): A(a)
    {
        this -> c = c;
    }
};

class D: public B, public C
{
    private:
    int d;

    public:
    
    // Default Constructor
    D(){
        d = 3;
    }

    // Parameterize Constructor
    D(int a,int b, int c, int d  ): B(b, a), C(c, a), A(a)
    {
        this-> d = d;
    }

    // Display
    void DisplayAll ()
    {
        cout<<"\n Value of a = "<< a;
        cout<<"\n Value of b = "<< b;
        cout<<"\n Value of c = "<< c;
        cout<<"\n Value of d = "<< d;

    }
};

int main()
{
    // Create an object of the most derived class, D
    // D(d, b, c, a)
    D objD(40, 30, 20, 10);

    // Call the display function
    // It will have access to members from A, B, C, and D
    cout << "Displaying values from object of Class D:";
    objD.DisplayAll();

    cout << "\n\n";

    // Example with default constructors
    D objD_default;
    cout << "Displaying values from default object of Class D:";
    objD_default.DisplayAll();
    
    return 0;
}