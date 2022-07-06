// Custom boilerplate: using configure user's snippet in the manage.
//Video : 
#include<iostream>
using namespace std;

class ShopItem{
    int ID;
    float price;
public:
    void setData(int a, float b){
        ID = a;
        price = b;

    }
    void getData(void){
        cout<<"The ID of this Item is: "<<ID<<endl;
        cout<<"The price of this Item is: "<<price<<endl;
    }
};

int main(){


//Pointers trial.
    // int a = 30;
    // int *ptr = &a;
    // cout<<*ptr<<endl;

// int *ptr = &size;
// int *ptr = new int [30];

    /*
    1 2 3
    ^
    |
    |
    ptr
    ptrTemp


    */

    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    int p, i;
    float q;
    
    // cout<<"The initial value of ptr is: "<<ptr<<endl;
    for(i = 0; i<size;i++){
        cout<<"Enter the ID and Price of the Item: "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    // cout<<"The final value of ptr is: "<<ptr<<endl;
    

    for(i = 0; i<size;i++){
        cout<<"The ID and Price of the Item: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    

    return 0;
}