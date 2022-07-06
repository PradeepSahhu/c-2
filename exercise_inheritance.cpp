// Custom boilerplate: using configure user's snippet in the manage.
// Video :
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int number1;
    int number2;

public:
    void setNumberSimple(int n1, int n2)
    { // Taking input of two numbers using a utility function...
        number1 = n1;
        number2 = n2;
    }
    /*--------------------------
    void Display(void){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
     */

    void DisplaySimple(void); // Only Declaration...
};

void SimpleCalculator :: DisplaySimple(void) //Defining the DisplaySimple function...
{
     cout<<"--------------------The Simple Calculator-----------------"<<endl;
    cout << "The Calculation of Addition of the simple calculator is: " << number1 + number2 << endl;
    cout << "The Calculation of Subraction of the simple calculator is: " << number1 - number2 << endl;
    cout << "The Calculation of Multiplication of the simple calculator is: " << number1 * number2<< endl;
    cout << "The Calculation of Division of the simple calculator is: " << number1 / number2<< endl;
    
}

class ScientificCalculator
{
    int Number3;
    int Number4;

public:
    void SetNumberScientific(int n3, int n4)
    { // Taking input of two numbers using a utility function...
        Number3 = n3;
        Number4 = n4;
    }
    void DisplayComplex(void){
        cout<<"--------------------The Scientific Calculator-----------------"<<endl;
        cout<<"The calculation of Reminder of Complex Calculator is: "<<Number3 % Number4<<endl;
        cout<<"The calculation of Power of Complex Calculator is: "<<pow(Number3, Number4)<<endl;
        cout<<"The calculation of square of each number of  Complex Calculator is: "<<Number3 * Number3<< " and "<<Number4 * Number4<<endl;
        cout<<"The calculation of cube of each number of Complex Calculator is: "<<Number3 * Number3 * Number3 << " and "<<Number4 * Number4 * Number4 <<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    int number5;

    public:
    void SetData(int num5){
        number5 = num5;
    }
    void DisplayAll(void){
        DisplaySimple();
        DisplayComplex();
        cout<<"----------------- Just Number -------------------------"<<endl;
        cout<<"the value of number5 is: "<<number5<<endl;
    }

};

int main()
{
    HybridCalculator calc;
    calc.setNumberSimple(5, 4);
    calc.SetNumberScientific(9, 8);
    calc.SetData(5);
    calc.DisplayAll();

    return 0;
}