// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;
// Static variable and Static Functions

class Employee
{
    int ID;
    static int count; // ---> Static variable, only declared here.

public:
    void setID(void)
    {
        cout << "Enter Employee ID: " << endl;
        cin >> ID;
        count++; // --> This is used to increase the value of count per call.
    }
    void displayID(void)
    {
        cout << "The Employee Id is : " << ID << " And Employee count is " << count << endl;
    }

    static void number(void){ // --> static functions can only work with other static functions or static variables.
        cout<<"The Employee number is: "<<count<<endl;
    }
};
int Employee ::count; // Static variable, default value is 0;
int main()
{

    Employee pradeep, Ritik, Sumit;
    pradeep.setID();
    pradeep.displayID();
    Employee::number();

    Ritik.setID();
    Ritik.displayID();
    Employee::number();

    Sumit.setID();
    Sumit.displayID();
    Employee::number();

    return 0;
}