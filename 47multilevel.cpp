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
void Student ::get_roll_number()
{
    cout << "The roll number is: " << roll_number << endl;
}
class Marks : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Marks::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Marks::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
class Result : public Marks
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Notes:
        If we are inheriting B from A and C from B: [A-->B-->C]
        1.A is the base class for B and B is the base class for C.
        2.A-->B-->C is called inheritance path.
    */
    Result salon;
    salon.set_roll_number(557);
    salon.set_marks(90.0, 94.0);
    salon.display_result();
    return 0;
}