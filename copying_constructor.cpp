// Custom boilerplate: using configure user's snippet in the manage.
//video: 34
#include<iostream>
using namespace std;


class Number{
        int a;
public:
    Number(){ //A defalut constructor that takes no value...
        a = 0;
    }; 
    Number(int num){
        a = num;
    }
    //This is copy constructor...
    Number(Number &obj){ //passing an object and object's value will be equal to the new object value.
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }
/* ----------------------------------------------
✨When no copy constructor is found, compiler supplies its own copy constructor...
*/

    void display(void){
        cout<<"The number for this object is: "<<a<<endl;
    }
};
int main(){
//It is necessary to make a default constructor as when making an object, it is necessary to 
//pass some values (argument) in it... 
//but default constructor don't take any value and so we don't have to pass any value when making the object...
    Number x,y,z(45), z2;
    x.display();
    y.display();
    z.display();


/* */
    Number z1(z); //Copy constructor invoked...
    z1.display();

    z2 = z;//Copy constructor not invoked... because object is already made... in first line...
    Number z3 = z; // copy construcor is invoked because object is just created in this line>...
    z2.display();
    z3.display();
//Copy constructor: if we wan't to male an object which exactly resembles x,y or z then 
// then we can make those object with the help of copy constructors
//we make copy constructor and pass x, y or z as argument...

    return 0;
}