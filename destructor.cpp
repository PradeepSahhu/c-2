// Custom boilerplate: using configure user's snippet in the manage.
// Video : 35
#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is calling constructor to create object Number: " << count << endl;
    }
    ~num()
    {
        cout << "This is calling Destructor to destory object Number: " << count << endl;
        count--;
    }
};

int main()
{
    cout<<"Entering main"<<endl;
    cout<<"creating first Object"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to the main"<<endl;


    return 0;
}