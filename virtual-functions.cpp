// Custom boilerplate: using configure user's snippet in the manage.
//Video : 56
#include<iostream>
using namespace std;

class BaseClass
{
public:
    int basevalue1 = 1;
    virtual void display(void)
    {
        cout << "The Base class value is " << basevalue1 << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int derivedvalue = 2;
    void display(void)
    {
        cout << "The Derived class value is " << derivedvalue << endl;
        cout << "The Base class value is " << basevalue1 << endl;
    }
};

int main(){

    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}