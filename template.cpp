// Custom boilerplate: using configure user's snippet in the manage.
// Video : 64
#include <iostream>
using namespace std;
template <class T> // Here T can be any data type int, float, char etc...
class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{

    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 2;
    // v1.arr[2] = 1;
    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 5;
    // v2.arr[2] = 1;
    // int answer = v1.dotProduct(v2);
    // cout << answer << endl;

    vector <float>v1(3);
    v1.arr[0] = 4.5;
    v1.arr[1] = 2.1;
    v1.arr[2] = 0.9;
    vector <float>v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 5.6;
    v2.arr[2] = 1.8;
    float answer = v1.dotProduct(v2);
    cout << answer << endl;
    return 0;
}