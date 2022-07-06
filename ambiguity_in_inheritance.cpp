// Custom boilerplate: using configure user's snippet in the manage.
// Video : 43
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(void)
    {
        cout << "How are you?" << endl;
    }
};
class Base2
{
public:
    void greet(void)
    {
        cout << "To Kaise hai aap?" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int data;

public:
    void greet(void) // This is the way to resolve ambiguity...
    {
        Base1::greet();
    }
};

class B
{
    int a;

public:
    void say(void)
    {
        cout << "Namaste world!!!" << endl;
    }
};
class D : public B
{
    int b;
    //D's new say() method will override the base class's say() method...
public:
void say(void)
    {
        cout << "Namaste world and my beautiful people!!!" << endl;
    }

};

int main()
{
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // Derived obj3;
    // obj3.greet();

    B ob;
    ob.say();
    D der;
    der.say();

    return 0;
}