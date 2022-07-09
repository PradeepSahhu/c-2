// Custom boilerplate: using configure user's snippet in the manage.
//Video : 67
#include<iostream>
using namespace std;

//NORMAL FUNCTIONS: 
// float funcAverage(int a , int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }


// float funcAverage2(int a , float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

//TEMPLATE FUNCTIONS:


template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
// template <class T1, class T2>
// float funcAverage(T1 a, T2 b){
//     float avg = (a+b)/2.0;
//     return avg;
// }


int main(){

    // float a;
    // a = funcAverage(5, 1.5);
    // printf("The average of these number is %.3f", a);
    // cout<<endl;
    // cout<<a<<endl;

    float x = 3.5, y = 8.8;
    swapp(x, y);
    cout<<"The value of x is: "<<x<<endl<<" the value of Y is: "<<y<<endl;

    

    return 0;
}