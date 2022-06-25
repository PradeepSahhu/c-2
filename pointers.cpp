// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

int main(){

    // what is a pointer? -----> Data tye which holds the address of other data types
    int i = 1;
    int *j = &i;
    cout<<"The memory address of i is: "<<&i<<endl;
    cout<<"The memory address stored in j is: "<<j<<endl;
    cout<<"The value stored in j is: "<<*j<<endl;

    return 0;
}