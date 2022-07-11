// Custom boilerplate: using configure user's snippet in the manage.
//Video : 71

//List STL... PART-2

/*
array store data as contigious memory block
6 7 8 9
so,of i have to remove a number from the middle, we have to sift left, all the right numbers.

That's why we use list...
*/
#include<iostream>
#include<list>
using namespace std;

// template <class T>
void display(list <int> &lst){
    list<int>:: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        
        cout<<*it<<" ";
    }
    cout<<endl;
}



int main(){

    // 6 8 9
    list<int> list1; //List of 0 length;
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(7);

    display(list1);

    //************ Removing Elements from List ************************
    // list1.pop_back(); // will remove the last element in list;
    // list1.pop_front(); // will remove the first element in the list;
    // list1.remove(1); // will remove the given element from the list. and if there is more than one then its all occurrences will be deleted.
    
    //****************** Sorting the list *****************
    // list1.sort();
    // display(list1); 

    //***************** List 2 ********************
    
    list<int> list2(3); // Empty list of size 7;
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    //***************** Sorting both list ************

    // list1.sort();
    // list2.sort();


    //********************** Merging the list ************
    // list1.merge(list2);
    // cout<<"List 1 after merging ";
    // display(list1);


    //******************* Reversing the list ************
    // list1.reverse();
    // display(list1);


    return 0;
}