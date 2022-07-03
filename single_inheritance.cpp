// Custom boilerplate: using configure user's snippet in the manage.
// Video : 38
#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1(); // Function declaration...
    int getData2(); // Function declaration...
};

void Base ::setData(void)
{
    data1 = 20;
    data2 = 10;
};

int Base ::getData1()
{
    return data1;
};

int Base ::getData2()
{
    return data2;
};

class Derived : public Base
{
    int data3;

public:
    void Process(); // Function declaration...
    void Display(); // Function declaration...
};

void Derived::Process()
{
    data3 = data2 * getData1();
};

void Derived ::Display()
{
    cout << "Value of Data 1 is: " << getData1() << endl;
    cout << "value of Data 2 is: " << data2 << endl;
    cout << "value of Data 3 is: " << data3 << endl;
};

int main()
{
    Derived der;
    der.setData();
    der.Process();
    der.Display();

    return 0;
}