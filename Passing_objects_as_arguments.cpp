// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1, Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;

    }
    void Print(void){
        cout<<"The value is: "<<a<<" + "<<b<<"!"<<endl;
    }

};

int main(){

    Complex c1,c2, c3;
    c1.setData(1,2);
    c1.Print();

    c2.setData(3,4);
    c2.Print();

    c3.setDataBySum(c1, c2);
    c3.Print();

    

    return 0;
}