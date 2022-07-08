// Custom boilerplate: using configure user's snippet in the manage.
//Video : 61 + 62
#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //Writing data to the file from the program.
    string st;
    string st2;
    // cout<<"Enter your name: "<<endl;
    // cin>>st;
    // // ofstream pout("sample.txt"); // opening file using constructor...
    // ofstream pout;
    // pout.open("sample.txt"); // opening file using member function (open)...
    // pout<<"my name is: "<<st;
    // pout.close();

    // ifstream pin("sample.txt");  //opening file using constructor...
    ifstream pin;
    pin.open("sample.txt"); // opening file using member function (open)...
    // pin>>st2;
    // cout<<st2;

    //Here eof mean end of file, so we are printing till the end of file.

    while(pin.eof() == 0){
        pin>>st2;
        cout<<st2;
        cout<<" ";
    };

    pin.close();

    

    return 0;
}