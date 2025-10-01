// INHERITANCE - SIMPLE/SINGLE, MULTILEVEL, HIERARCHICAL

                // PERSON
                    //
                    //
                    //
                // EMPLOYEE
                    //
                    //
                    //
                // DEVELOPER
                    //
                    //
                    //
            //  //  //  //  //  //
            //                  //
            //                  //
    // PARTTIMEDEVELOPER    // FULLTIMEDEVELOPER


#include <iostream>
#include <string.h>

using namespace std;

// PERSON CLASS
class Person
{
// Protected
protected:

    int age;
    char name[20];

public:

    // Default Constructor of Person
    Person()
    {
        age = 1;
        strcpy(name,"NA");
    }

    // Parameterize Constructor of Person
    Person(int age, char *name)
    {
        this -> age = age;
        strcpy(this -> name,name);
    }

    // Setter Age of Person
    void SetAge(int age)
    {
        this -> age = age;
    }

    // Setter Name of Person
    void SetName (char *name)
    {
        strcpy(this -> name, name);
    }

    // Getter Age of Person
    int GetAge()
    {
        return age;
    }

    //Getter Name of Person
    char * GetName()
    {
        return name;
    }

    // Display of Person
    void DisplayPerson()
    {
        cout<<"\nName of Person is : "<<name;
        cout<<"\nAge of Person is : "<<age;
    }

};


// EMPLOYEE CLASS
class Employee: public Person 
{
    protected:
    int eid;

    public:

    // Default Constructor of Employee
    Employee()
    {
        eid = 0;
    }

    // Parameterized Constructor of Employee
    Employee(int eid, int age, char* name)
            : Person(age, name)
    {
        this -> eid = eid;
    }

    // Setter of Eid of Employee
    void SetEid(int eid)
    {
        this -> eid = eid;
    }

    // Getter of Eid of Employee
    int GetEid()
    {
        return eid;
    }

    // Display of Employee
    void DisplayEmployee()
    {
        DisplayPerson();
        cout<<"\nEid of Employee is : "<<eid;
    }

};


// DEVELOPER CLASS
class Developer: public Employee
{
    protected:
    char projname[20];

    public:

    // Default Constructor of Developer
    Developer()
    {
        strcpy(projname,"NO");
    }

    // Parameterize Constructor of Developer
    Developer (int age, char *name, int eid, char *projname)
            : Employee (eid, age, name)
            {
                strcpy(this -> projname, projname);
            }

    // Setters of Developer
    void SetProjName (char *projname)
    {
        strcpy(this -> projname, projname);
    }

    // Getters of Developer
    char * GetProjname ()
    {
        return projname;
    }

    //  Display of Developer
    void DisplayDeveloper()
    {
        DisplayEmployee();
        cout<<"\nProject Name of Developer is : "<<projname;
    }
};


// PARTTIMEDEVLOPER CLASS
class PartTimeDeveloper : public Developer
{
    private:

    int workhour;


    public:

    // Default Constructor of PartTimeDeveloper
    PartTimeDeveloper()
    {
        workhour = 0;
    }

    // Parameterized Constructor of PartTimeDeveloper
    PartTimeDeveloper(int age, int eid, char *name, char *projname, int workhour)
                    : Developer(age, name, eid, projname)
                    {
                        this-> workhour = workhour;
                    }

    // Getter of PartTimeDeveloper
    int GetWorkHour()
    {
        return workhour;
    }

    // Setter of PartTimeDeveloper
    void SetWorkHour(int workhour)
    {
        this->workhour = workhour;
    }

    // Display of PartTimeDeveloper
    void DisplayWorkHour()
    {
        DisplayDeveloper();
        cout<<"\n Work Hours of Part Time Developer is : "<<workhour;
    }

};

// FULLTIMEDEVELOPER CLASS
class FullTimeDeveloper : public Developer
{
    private:

    int workdays;


    public:

    // Default Constructor of FullTimeDeveloper
    FullTimeDeveloper()
    {
        workdays = 0;
    }

    // Parameterized Constructor of FullTimeDeveloper
    FullTimeDeveloper(int age, int eid, char *name, char *projname, int workdays)
                    : Developer(age, name, eid, projname)
                    {
                        this-> workdays = workdays;
                    }

    // Getter of FullTimeDeveloper
    int GetWorkDays()
    {
        return workdays;
    }

    // Setter of FullTimeDeveloper
    void SetWorkDays(int workdays)
    {
        this->workdays = workdays;
    }

    // Display of FullTimeDeveloper
    void DisplayWorkDays()
    {
        DisplayDeveloper();
        cout<<"\n Work Days of Full Time Developer is : "<<workdays;
    }

};



int main()
{
cout << "--- Demonstrating Parameterized Constructors ---" << endl;

    // Create a PartTimeDeveloper object using the parameterized constructor
    PartTimeDeveloper ptd1(28, 101, "Alice", "Web Portal", 20);
    cout << "\nDetails for Part-Time Developer 1:";
    ptd1.DisplayWorkHour();
    cout << "\n----------------------------------------" << endl;

    // Create a FullTimeDeveloper object using the parameterized constructor
    FullTimeDeveloper ftd1(35, 102, "Bob", "Mobile App", 250);
    cout << "\nDetails for Full-Time Developer 1:";
    ftd1.DisplayWorkDays();
    cout << "\n----------------------------------------" << endl;


    cout << "\n\n--- Demonstrating Default Constructors and Setters ---" << endl;

    // Create a PartTimeDeveloper object using the default constructor
    PartTimeDeveloper ptd2;
    // Use setters to assign values
    ptd2.SetName("Charlie");
    ptd2.SetAge(22);
    ptd2.SetEid(103);
    ptd2.SetProjName("API Development");
    ptd2.SetWorkHour(15);

    cout << "\nDetails for Part-Time Developer 2 (after setting values):";
    ptd2.DisplayWorkHour();
    cout << "\n----------------------------------------" << endl;


    // Create a FullTimeDeveloper object using the default constructor
    FullTimeDeveloper ftd2;
    // Use setters to assign values
    ftd2.SetName("Diana");
    ftd2.SetAge(40);
    ftd2.SetEid(104);
    ftd2.SetProjName("Database Migration");
    ftd2.SetWorkDays(260);

    cout << "\nDetails for Full-Time Developer 2 (after setting values):";
    ftd2.DisplayWorkDays();
    cout << "\n----------------------------------------" << endl;


    return 0;
}