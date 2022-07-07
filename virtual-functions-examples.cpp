// Custom boilerplate: using configure user's snippet in the manage.
// Video : 57
#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display(void){
        cout<<"Tities and bonkers are the same. Both have huge masses and milk industry flourishes on them."<<endl;
    };
};

class CWHvideo : public CWH
{

    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    void display(void){
        cout<<"This is a amazing video with title: "<<title<<endl;
        cout<<"The rating of this video is: "<<rating<<" out of five stars"<<endl;
        cout<<"The length of this video is: "<<videoLength<<" minutes"<<endl;
    }
};
class CWHText : public CWH
{

    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    // void display(void){
    //     cout<<"This is a amazing story with title: "<<title<<endl;
    //     cout<<"The rating of this Text tutorial is: "<<rating<<" out of five stars"<<endl;
    //     cout<<"The length of this Text is: "<<words<<" words"<<endl;
    // }
};

int main()
{

    string title;
    float rating, vlen;
    int words;

    //for code with harry video.
    title = "This is a DJ tutorial.";
    vlen = 17.56;
    rating = 0.9;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();

    cout<<"******************************************************"<<endl;

    //for code with harry Text.
    title = "This is a blog Text.";
    words = 500;
    rating = 1.0;
    CWHText blogText(title, rating, words);
    // blogText.display();

    CWH *bonkers[2];
    bonkers[0] = &djvideo;
    bonkers[1] = &blogText;

    bonkers[0]->display();
    bonkers[1]->display();

     return 0;
}

/*
// Rules for virtual functions:
1. They  cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If A virtual function define in base class, there is no necessity of redefining it in the derived class.


*/