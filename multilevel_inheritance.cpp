// Custom boilerplate: using configure user's snippet in the manage.
// Video : 40
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number(void)
{
    cout << "The Student Roll Number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks(void)
{
    cout << "The marks of mathematics is: " << maths << endl;
    cout << "The marks of physics is: " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display(void);
};
void Result ::display(void)
{
    get_roll_number();
    get_marks();
    cout << "The percentage of maths and physics together is: " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    /*
    Notes:
        If we are inheriting B from A and C from B: [ A ---> B ---> C ]
         1. A is the base class for B and B is the base class of C.
         2. A-->B-->C is called Inheritance path.
    */
    Result pradeep;
    pradeep.set_roll_number(20);
    pradeep.set_marks(90.0, 95.0);
    pradeep.display();

    return 0;
}