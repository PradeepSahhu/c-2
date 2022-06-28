// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

//Forward Declaration...
class C2;


class C1
{
    int value1;
    friend void swap(C1 &, C2 &);

public:
    void intValue(int b)
    {
        value1 = b;
    }
    void displayValue(void)
    {
        cout << "The value of C1 Class is: " << value1 << endl;
    }
};
class C2
{
    int value2;
    friend void swap(C1 &, C2 &);

public:
    void intValue(int a)
    {
        value2 = a;
    }
    void displayValue(void)
    {
        cout << "The value of C1 Class is: " << value2 << endl;
    }
};
//Swiping Function... Simple Concept...
/* 
int temp = X;
X = Y;
Y = temp;
*/
void swap(C1 &X, C2 &Y){ //Here i will take Objects as parameter and fetch its value from the class.
    int temp = X.value1;
    X.value1 = Y.value2;
    Y.value2 = temp;
}

int main()
{

    C1 obj1;
    C2 obj2;
    
    obj1.intValue(34);
    obj2.intValue(99);

    swap(obj1, obj2);

    
    obj1.displayValue();
    
    obj2.displayValue();
    
    return 0;
}