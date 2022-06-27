// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

class Employee
{
    int ID;
    int salary;

public:
    void setData(void){
        salary = 122;
        cout<<"Enter Id of employee: "<<endl;
        cin>>ID;
    }
    void getData(void){
        cout<<"The ID of the employee is: "<< ID <<endl;
    }
};

int main()
{
Employee fb[4]; // ---> Arrays of objects... A Class is just a data type like int,float etc.
for(int i=0;i<4;++i){
    fb[i].setData();
    fb[i].getData();
}
    return 0;
}