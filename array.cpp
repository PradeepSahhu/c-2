// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

int main(){

    int marks[5] = {23,24,12,56,89};
    
    
    // using for loop 
    // for(int i = 0;i<5;i++){
    //     cout<<"The value of marks at index "<<i<<" is "<<marks[i]<<endl;
    // }

    // using while loop
    // cout<<"Using while loop"<<endl;
    // int i=0;
    // while(i<5)
    // {
    //     cout<<"The value of marks at index "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // using do-while loop
    // cout<<"Using do-while loop"<<endl;
    // int i=0;
    // do
    // {
    //     cout<<"The value of marks at index "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }while(i<5);

    cout<<"This is the memory address of array: "<<marks<<endl;
    int *p = marks;
    cout<<(p+2)<<endl;
    
    


    return 0;
}