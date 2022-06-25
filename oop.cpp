// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
#include <string>
using namespace std;

class binary
{
    //private: ---> By default
    string s;
    void chk_binary(void);   /* ---> This is private function and can't be used outside the function.  
                                     and can only be used by other functions.*/

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void){
    {
        cout << "Enter Binary number: " << endl;
        cin >> s;
    }
};
void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary Number" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    chk_binary();  // ---> Nesting of member function. 
    cout<<"Doing ones Compliment..."<<endl;
    for(int i = 0; i<s.length();i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout<<"Displaying the Numbers"<<endl;
    // cout<<s<<endl; // ---> Better way if don't want to print using for loop.
    //Alternative way to print...
    for(int i=0; i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_binary();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}