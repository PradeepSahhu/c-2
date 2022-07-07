// Custom boilerplate: using configure user's snippet in the manage.
// Video : 60
#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes for working with files in c++ are:
1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase



In order to work with files in c++, we have to open it. Pratically, there are two ways to open a file:
1. using the constructor
2. using the member function open() of the class.
*/

int main()
{
    string st = "Hello my name is pradeep sahu and i am going to update the content of this file...";
    string st2;
    //opening files using constructor and writing it.
    ofstream out("sample.txt"); //Write operations.
    //Here out object name could be anything because ofstream is a class.
    out<<st;


    //Opening file using constructor and reading from it.
    // ifstream in("sample.txt"); //Reading operations.
    // // in>>st2; //Will just return the first word of the file.
    // getline(in, st2); //will print out the first line of the file. 
    // cout<<st2;


    return 0;
}