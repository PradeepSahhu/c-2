// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
//Multiple constructors of the same name, this is called constructor overloading...
    Complex(){
        a = 0;
        b = 0;
    }
    Complex(int x, int y){
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    
    void PrintNumber(){
        cout<<"Your number is: "<< a <<" + "<< b << "i"<<endl;
    }
};

int main(){
//C++ compiler will automatically choose the right contructor according to the argument passed...
    Complex c1(4,6);
    c1.PrintNumber();
    
    Complex c2(4);
    c2.PrintNumber();

    Complex c3;
    c3.PrintNumber();


    return 0;
}