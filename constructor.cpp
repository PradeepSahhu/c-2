// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
//Constructor is a special member function with same name as of the class.
//It is used to initialize the objects of its class.

//It is automatically invoked every time we create an object..
    Complex(void)  //Constructor Declaration and define...
    //This is Default constructor as it accepts no parameters.
    {
        a = 10;
        b = 0;
    }
    /*Complex(int value1, int value2)  //Constructor Declaration and define...
    // As it is accepting two parameters, it is called parameterized constructor...
    {
        a = value1;
        b = value2;
    }*/
    void displayData(void){
        cout<<"The value is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    // Implicit call...
    Complex a(2,4);
    a.displayData();

    // Explicit call...
    Complex b = Complex(4,6);
    b.displayData();
    return 0;
}
/*
 Characteristics (Properties) of Constructors:
1. Constructor has same name as the Class...
2. Constructor has no return type...and it doesn't any return value it set values of class private integers (data)...(int,stirng, etc...)
3. Constructor is automatically invoked whenever a object is created...
4. Constructor must be declared in public...
5. It can have default arguments.
6. We cannot refer to their address. <----
*/