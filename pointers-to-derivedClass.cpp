// Custom boilerplate: using configure user's snippet in the manage.
// Video : 55
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int basevalue1 = 1;
    void display(void)
    {
        cout << "The Base class value is " << basevalue1 << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int derivedvalue = 5;
    void display(void)
    {
        cout << "The Derived class value is " << derivedvalue << endl;
        cout << "The Base class value is " << basevalue1 << endl;
    }
};

int main()
{
    // int *int_pointer;
    // float a = 34.53;
    // int_pointer = &a; // will throw error

    BaseClass *pointer_to_baseClass; // pointer which point base class object;
    BaseClass obj_base;
    DerivedClass obj_derived;
    pointer_to_baseClass = &obj_derived; //pointing base class pointer to derived class.
    pointer_to_baseClass->basevalue1 = 34;
    // pointer_to_baseClass->derivedvalue = 4; // will throw an error.
    pointer_to_baseClass->display();

    pointer_to_baseClass->basevalue1 = 3400;
    pointer_to_baseClass->display();

    //*****************************************************************************************

    DerivedClass *derived_class_pointer;
    // derived_class_pointer = &obj_derived;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->basevalue1 = 99;
    derived_class_pointer->derivedvalue = 100;
    derived_class_pointer->display();

    return 0;
}