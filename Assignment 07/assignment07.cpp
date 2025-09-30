// DYNAMIC MEMORY - SETTERS, GETTERS

#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
private:
    int *empid;
    char *name;

public:

    // Default Constructor
    Employee()
    {
    empid = new int (1);
    name = new char [3];
    strcpy(name, "NA");
    }

    // Parameterized Constructor
    Employee(int empid, const char* name)
    {
        this->empid = new int (empid);
        int len = strlen(name);
        this->name = new char [len+1];
        strcpy(this->name, name);
    }

    // Destructor
    ~Employee()
    {
        delete empid;
        delete [] name;
    }

    // Setter of Empid
    void SetEmpid(int empid)
    {
        *(this->empid) = empid;
    }

    // Setter of Name
    void SetName(const char* name)
    {
        delete [] (this->name);
        int len = strlen(name);
        this->name = new char [len+1];
        strcpy(this->name, name);
    }

    // Getter of empid
    int GetEmpid()
    {
        return *empid;
    }

    //Getter of Name
    char* GetName()
    {
        return name;
    }

};


int main()
{

    cout << "--- Employee 1 (Default Constructor) ---" << endl;
    Employee e1;
    cout << "ID: " << e1.GetEmpid() << endl;
    cout << "Name: " << e1.GetName() << endl << endl;


    cout << "--- Employee 2 (Parameterized Constructor) ---" << endl;
    Employee e2(101, "Sonia");
    cout << "ID: " << e2.GetEmpid() << endl;
    cout << "Name: " << e2.GetName() << endl << endl;


    cout << "--- Updating Employee 1's Data ---" << endl;
    e1.SetEmpid(202);
    e1.SetName("Vikram Singh");

    cout << "Updated ID: " << e1.GetEmpid() << endl;
    cout << "Updated Name: " << e1.GetName() << endl << endl;

    return 0;
}
   
   