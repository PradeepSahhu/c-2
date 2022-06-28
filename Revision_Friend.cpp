// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

//Forward Declaration;
class C2;

class C1
{
    //Default Private...
    int data1;
    friend void addClass(C1, C2); // We use forward declaration because C2 mention here...

public:
    void setValue(int value1)
    {
        data1 = value1;
    }
    void displayData(void)
    {
        cout << "The value of the data1 is: " << data1 << endl;
    }
};
class C2
{
    int data2;
    friend void addClass(C1, C2);

public:
    void setValue(int value2)
    {
        data2 = value2;
    }
    void displayData(void)
    {
        cout << "The value of the data1 is: " << data2 << endl;
    }
};

void addClass(C1 o1, C2 o2)
{
    cout<<"The return Sum of both class value is: "<< o1.data1 + o2.data2<<endl;
}
int main()
{

    C1 obj1;
    C2 obj2;
    obj1.setValue(5);
    obj2.setValue(5);
    addClass(obj1, obj2); //Copying value of obj1 to o1 and obj2 to o2...
    return 0;
}