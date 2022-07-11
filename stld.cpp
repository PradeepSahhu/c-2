// Custom boilerplate: using configure user's snippet in the manage.
// Video : 74
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{

    // function objects (Functor): Function wrapped in a class so that it is available like an object.
    int arr[] = {1, 4, 5, 12, 54, 77, 3,2};

    // sort(arr, arr+8);
    sort(arr, arr+8, greater<int>());

    for (int i = 0; i < 8 ;i++)
    {

        cout << arr[i]<<" ";
    }

    return 0;
}