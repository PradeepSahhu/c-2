// Custom boilerplate: using configure user's snippet in the manage.
// Video : 41
#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance

class DerivedC: visibility-mode base1, visibility-mode base2
{
    class body of class "DerivedC"
}

*/

class Base1
{
protected:
    int baseint1;

public:
    void set_baseint(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void set_baseint2(int a)
    {
        baseint2 = a;
    }
};
class Base3
{
protected:
    int baseint3;

public:
    void set_baseint3(int a)
    {
        baseint3 = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void sum_of_baseint(void)
    {
        cout<<"The value of baseint1 is: "<<baseint1<<endl;
        cout<<"The value of baseint2 is: "<<baseint2<<endl;
        cout<<"The value of baseint3 is: "<<baseint3<<endl;
        cout << "The sum of all integers of base classes are: " << baseint1 + baseint2 + baseint3 << endl;
    }
};
/* 
The inherited derived class will look something like this:
Date Members:
    baseint1 ---> protected;
    baseint2 ---> protected;
    baseint3 ---> protected;
Member Functions:
    set_baseint1(int a); ---> public
    set_baseint2(int a); ---> public
    set_baseint3(int a); ---> public
    sum_of_baseint(void) ---> public

--------------------------------------
class Derived{
protected:
    int baseint1;
    int baseint2;
    int baseint3;
public:
    void set_baseint1(int a);
    void set_baseint2(int a);
    void set_baseint3(int a);
    void sum_of_baseint(void);

}
*/

int main()
{
    Derived der;
    der.set_baseint(23);
    der.set_baseint2(5);
    der.set_baseint3(55);
    der.sum_of_baseint();

    return 0;
}