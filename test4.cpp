#include<iostream>
union Student
{
    char name[25], grade;
    int age, year, semester;
    float m[5];
} s1;
int main()
{
    int i, j;
    int total = 0, average;
    char grade;
    // cout<< "\nEnter the student's name : ";
    // cin>> s1.name;
    cout << "\nName : " << s1.name;
    cout << "\n----------------------\n";
    cout << "\nEnter the age";
    cin >> s1.age;
    cout << "\nAge : " << s1.age;
    cout << "\n----------------------\n";
    cout << "\nEnter the year";
    cin >> s1.year;
    cout << "\nYear : " << s1.year;
    cout << "\n----------------------\n";
    cout << "Enter semester ";
    cin >> s1.semester;
    cout << "\nSemester : " << s1.semester;
    cout << "\n----------------------\n";
    cout << "Enter the five different marks for the student :";

    for (i = 0; i < 5; i++)
    {
        cin >> s1.m[i];
        if (s1.m[i] >= 50)
            total = total + s1.m[i];
        else
            j++;
    }
    average = total / 5;
    if (average >= 90)
    {
        grade = 'S';
    }
    else if (average >= 80 && average < 90)
    {
        grade = 'A';
    }
    else if (average >= 70 && average < 80)
    {
        grade = 'B';
    }
    else if (average >= 60 && average < 70)
    {
        grade = 'C';
    }
    else if (average >= 50 && average < 60)
    {
        grade = 'D';
    }
    else if (j >= 1)
    {
        grade = 'F';
    }
    cout << "\nGrade : " << grade << "\n";
    // cout<<"Size of the union is :"<<sizeof(s1);

    return 0;
}