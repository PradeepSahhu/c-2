// Custom boilerplate: using configure user's snippet in the manage.
// Video : 37
#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(){};
    Employee(int empID)
    {
        id = empID;
        salary = 32;
    }
    void display(void)
    {
        cout << "The Employee ID is: " << id << endl;
    }
};

// Derived class syntax.
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Notes:
1. Default visibility mode is private...
2. Public visibility mode: Public members of the base class becomes Public Members of the derived class.
3. Private visibility mode: Public members of the base class becomes Private Members of the derived class.
4. Private members are never inherited...
*/

// Creating a programmer class derived from Employee base class...

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int proID)
    {
        id = proID;
        languageCode = 9;
    }

    void getData(void){
        cout<<id<<endl;
    }
};

int main()
{
    Employee rohan(1), suman(2);
    cout << rohan.salary << endl;
    cout << suman.salary << endl;
    // rohan.display();
    // suman.display();

    Programmer pradeep(3);
    // pradeep.display(); // privately inherited...
    cout<<pradeep.id<<endl; // Because Publicly inherited...
    cout << pradeep.languageCode<<endl;
    pradeep.getData();

    return 0;
}