// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;


void swapPointer(int* a, int* b){
    cout<<*a<<" "<<*b<<endl;
    cout<<a<<" "<<b<<endl;

}
int main(){

    int a = 5, b = 8;
    swapPointer(&a, &b);

    return 0;
}