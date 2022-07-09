// Custom boilerplate: using configure user's snippet in the manage.
// Video : 68
#include <iostream>
using namespace std;

template <class T>
class Pradeep
{
public:
    T data;
    Pradeep(T a)
    {
        data = a;
    }

    void display(void);
    
};
template <class T>
void Pradeep<T> ::display(void){
        cout<<data<<endl;
    }

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}


int main()
{
    // Pradeep <float> p(5.5);
    // Pradeep <char> p('a');
    // cout<<p.data<<endl;
    // p.display();

    // func(4); // Exact match takes the highest priority...
    func1(1);
    

    return 0;
}