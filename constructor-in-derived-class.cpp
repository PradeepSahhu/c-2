// Custom boilerplate: using configure user's snippet in the manage.
//Video : 48
#include<iostream>
using namespace std;
/* Syntax for derived class constructor...
Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)
*/

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B() because A is base class.
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A() because base class- B is inherited first 
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A() because Base class C is a virtual base class.
};

*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};
//Order of Execution of constructor...
class Derived: public Base2, public Base1{ //Base2 is herited first so the constructor of base class 2 will be called first and then base 1...
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a) //See syntac above... here order doesn't matter 
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};

int main(){
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}