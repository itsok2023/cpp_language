// Shallow Copy vs. Deep Copy

#include <iostream>
#include <string.h>

using namespace std;

class Test
{
private:

    int *ptr;

public:

    // Default Constructor
    Test()
    {
        ptr = new int (1);
    }

    // Parameterized Constructor
    Test( int ptr )
    {
        this -> ptr = new int (ptr);
    }

    //Copy Constructor
    Test( Test &k)
    {
        // ptr = k.ptr;  
        // Shallow copy

        ptr = new int;
        *ptr = *(k.ptr);
        // Deep Copy
    }

    // display
    void display ()
    {
        cout<<"\nNumber is : "<< *ptr;
    }

    // Destructor
    ~Test()
    {
        delete ptr;
    }

};


int main(){

    Test ob1 (10);
    ob1.display ();

    {
        Test ob2 (ob1);
        ob2.display();
    }

    ob1.display();

    return 0;
}