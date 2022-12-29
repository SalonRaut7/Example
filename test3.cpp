// Create a structure called student with the following details as variables within it.
// 1. Name of the student 2. Age 3. Year of study 4. Semester 5. 5 different subject marks in array
// Write  a  C++  program  to  create  object  for  the  union  to  access  these
// and  print  the  Name,  age,  year, semester and grade according to their percentage of marks scored.
// 90 % and above –S grade 80% to 89% --A grade 70% to 79% --B grade 60% to 69% --C grade 50% to 59% --D grade
#include <iostream>
using namespace std;
struct student
{
    char name[30];
    int age, year, semester;
    float marks[5];
};
int main()
{
    int i;
    int total = 0, average;
    char grade;
    student st;
    cout << "Enter the name of student " << endl;
    cin >> st.name;
    cout << "Enter the age of student" << endl;
    cin >> st.age;
    cout << "Enter the year of study" << endl;
    cin >> st.year;
    cout << "Enter the Semester" << endl;
    cin >> st.semester;
    cout << "Enter the five different marks for the student :";
    for (i = 0; i < 5; i++)
    {
        cin >> st.marks[i];
       // if (st.marks[i] >= 50)
            total = total + st.marks[i];
        // else
        //     j++;
    }
    //cout << total;
    
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
    else{
        grade = 'F';
    }
    cout<<"Details of the student are: "<<endl;
    cout<<"Name:    "<<st.name<<endl;
    cout<<"Age:     "<<st.age<<endl;
    cout<<"Year:    "<<st.year<<endl;
    cout<<"Semester:"<<st.semester<<endl;
    cout<<"Grade:  "<< grade << "\n";

    return 0;
}