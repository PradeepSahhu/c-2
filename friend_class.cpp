// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

// Forward Declaration;
class Complex;

class Calculator
{
public:
    int add(int n1, int n2)
    {
        return (n1 + n2);
    }

    int sumRealComplex(Complex, Complex); // only declaration...
    int sumCompComplex(Complex, Complex); // only declaration...
};

class Complex
{
    int a, b;
    // Making two friends of Calculator class's function...
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Instead of making two friends of the same class's function, we can make the entire class our friend.
    //Alter: Declaring the entire class as friends...
     friend class Calculator; 

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void Print(void)
    {
        cout << "The value is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{ //---> Calculator Class's function definition.(Define)

    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{ //---> Calculator Class's function definition.(Define)

    return (o1.b + o2.b);
}

int main()
{

    Complex c1, c2;
    c1.setNumber(1, 2);
    c2.setNumber(3, 4);

    Calculator realcalc;
    int res = realcalc.sumRealComplex(c1, c2);
    cout << "The Sum of real part of c1 anc c2 is: " << res << endl;

    int resCalc = realcalc.sumCompComplex(c1, c2);
    cout << "The sum of complex part of c1 and c2 is: " << resCalc << "i" << endl;

    return 0;
}