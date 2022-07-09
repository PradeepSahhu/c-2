// Custom boilerplate: using configure user's snippet in the manage.
// Video : 66
#include <iostream>
using namespace std;
// TEMPLATE DEFAULT PARAMETERS.

template <class N1 = int, class N2 = float, class N3 = char> // default parameters.
class myClass
{
public:
    N1 data1;
    N2 data2;
    N3 data3;
    myClass(N1 num1, N2 num2, N3 num3)
    {
        data1 = num1;
        data2 = num2;
        data3 = num3;
    }
    void display(void)
    {
        cout << data1 << endl
             << data2 << endl
             << data3 << endl;
    }
};

int main()
{

    // myClass<> obj(2, 3.4, 'a'); // no arguments in templates. = using default argument...
    // obj.display();


    myClass<float, char, char> obj(23.4, 'p', 'r'); 
    obj.display();


    return 0;
}