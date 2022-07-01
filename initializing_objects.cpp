// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

class BankAccount{
    int principal;
    int years;
    float interestRate;
    float returnValue;
public:
    BankAccount(){}; //We make this so as if any object doesn't have any any argument still it can work...
    BankAccount(int p, int y, float r);
    BankAccount(int p, int y, int R);

    void show();


};
BankAccount :: BankAccount(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
    
}
BankAccount :: BankAccount(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}
void BankAccount :: show(){
        cout<<endl<<"The principal value is: "<<principal<<endl<<" years is: "<<years
        <<" final return value is "<<returnValue<<endl;
    }



int main(){

    BankAccount bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd2.show(); //As it doesn't have any argument, it will return garbage value...

    cout<<"Enter p,y and r"<<endl;
    cin>> p >> y >> r;

    bd1 = BankAccount(p,y,r);
    bd1.show();

    cout<<"Enter p,y and R"<<endl;
    cin>> p >> y >> R;

    bd2 = BankAccount(p,y,R);
    bd2.show();
    
    

    return 0;
}