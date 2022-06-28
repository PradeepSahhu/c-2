// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
#include<cmath>
using namespace std;

//distance between two points...

class Point{
    int x, y;
    friend void distance(Point , Point );
public:
    Point(int v1, int v2){
        x = v1;
        y = v2;
    };
    void displayDataf(void){
        cout<<"The point of ("<<x<<","<<y<<")"<<endl;
    };
};
//Write a function to fetch the distance between two points...
// formula: underRoot((x2 - x1) square + (y2 - y1) square)

void distance(Point o1, Point o2){
    //sqrt[(o2.x - o1.x) square + (o2.y - o1.y) square]
    int value = sqrt(pow((o2.x - o1.x),2) + pow((o2.y - o1.y),2));
    cout<<"The value is: "<<value<<endl;
}

int main(){
    Point o1(1,0);
    // o1.displayDataf();

    Point o2(70, 0);
    distance(o1, o2);

    

    return 0;
}