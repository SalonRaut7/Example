#include <iostream>
using namespace std;
class student{
    char name[25];
    float marks[3];
public:
    float average;
    void getdata();
    void display()
    {
        cout << "Your name is:" << name << endl;
        cout << "Your average marks is:" <<average;
    }
    friend class averagecalc;
};
void student::getdata(){
    cout << "Enter student name:" << endl;
    cin >> name;
    cout << "Enter marks in three subjects:" << endl;
    for (int i = 0; i < 3; i++){
        cin >> marks[i];
    }
}
class averagecalc{
    public:
    void mark_avg(student);
};
void averagecalc :: mark_avg(student s)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + s.marks[i];
    }
    s.average=sum/3;   
    s.display();
}
int main()
{
    student s1;
    s1.getdata();
    averagecalc avg;
    avg.mark_avg(s1);
    return 0;
}