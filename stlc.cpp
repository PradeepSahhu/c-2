// Custom boilerplate: using configure user's snippet in the manage.
//Video : 73
#include<iostream>
#include<map>
#include<string>
using namespace std;


//Map is an associative array.
int main(){

    map<string, int> marksMap;
    marksMap["Pasoori"] = 69;
    marksMap["Purva"] = 99;
    marksMap["pradeep"] = 55;
    marksMap["priyanka"] = 88;

    marksMap.insert({{"kozume", 199}, {"kuroo",187}});

    map<string,int>::iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<": "<<(*iter).second<<"\n"; 
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    

    return 0;
}