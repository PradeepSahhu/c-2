// Custom boilerplate: using configure user's snippet in the manage.
// Video : 39
#include <iostream>
using namespace std;

/*
Protected access modifiers are similar to private access modifiers as
it can only be used by member functions and friend functions however unlike
private it can also be inherited in derived classes.
*/

class Base
{
private:
    int b;

protected:
    int a = 5;
};
/*For a protected member:
                       | Public Derivation    Private Derivation   Protected Derivation   |
    1.Private members     Not Inherited         Not Inherited       Not Inherited
    2.public members        Public                Private             Protected
    3.protected members     Protected             Private              Protected
*/
class Derived : protected Base
{
public:
    void display()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a<<endl; //will not work since a is protected in both base as well as derived class.
    // cout<<d.a<<endl;
    d.display();

    return 0;
}