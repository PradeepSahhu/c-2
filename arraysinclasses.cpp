// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

class shop
{
    int itemId[10];
    int itemPrice[10];
    int counter;

public:
    void initCounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};
void shop :: setPrice(void){
    cout<<"Enter the Item ID: "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the Item Price: "<<endl;
    cin>>itemPrice[counter];
    counter++;
};
void shop ::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of the Item with ID- "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}