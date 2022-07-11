// Custom boilerplate: using configure user's snippet in the manage.
//Video : 70

// STL PART-1
#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector <T> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<' '; //will print out the value at position i just like above.
    }
    cout<<endl;
    

}

int main(){
/* ways to create a vector */
    vector <int> vec1; // Zero length integer vector.

    int size=5, value;
    // cout<<"Enter the Size of your Vector..."<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the number"<<endl;
    //     cin>>value;
    //     vec1.push_back(value);
    // }
    // // vec1.pop_back(); //Will remove the last Entry...
    // vector<int> :: iterator iter = vec1.begin(); //Default template to use iterator...
    // // vec1.insert(iter+1, 69); //will push the iterator 69 at position 1.
    // // vec1.insert(iter+1, 5, 69); //will push the iterator 69 at position 1 and make 5 copies of it.
    // display(vec1);



    vector <char> vec2(4); // 4-element character vector.
    // vec2.push_back('a');
    // display(vec2);

    vector <char> vec3(vec2); // 4-element character vector.
    // display(vec3);

    vector <double> v(6,69); // 6-element vector of 3s.
    display(v);

    // cout<<v.size();

    


    
    return 0;
}