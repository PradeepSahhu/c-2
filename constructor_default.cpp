// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
//Multiple constructors of the same name, this is called constructor overloading...
    // Complex(){
    //     a = 0;
    //     b = 0;
    // }
    // Complex(int x, int y){
    //     a = x;
    //     b = y;
    // }

    //Default constructor... If no argument is given, it will choose default value...
    //Defalut values are always given from the right...
    Complex(int x = 2, int y = 5){
        a = x;
        b = y;
    }
    
    void PrintNumber(){
        cout<<"Your number is: "<< a <<" + "<< b << "i"<<endl;
    }
};

int main(){
//Default values are given to the constructor, so if no value is given it will choose the defalut value...
    Complex c1(4,6);
    c1.PrintNumber();
    
    Complex c2(4);
    c2.PrintNumber();

    Complex c3;
    c3.PrintNumber();


    return 0;
}