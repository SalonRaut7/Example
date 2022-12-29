/*Create a structure called employee with the following details as variables within it.
  i. Name of the employee ii.Age iii. Designation iv.Salary
 Write a C++ program to create array of objects for the structure to access these
 and print the name, age, designation and salary */
#include <iostream>
#include <cstring>
using namespace std;
struct employee
{
    char name[25];
    int age;
    char Designation[30];
    float Salary;
};
int main()
{   
    int n;
    cout<< "Enter no of employess:"<<endl;
    cin>>n;
    employee fb[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of employee " << i + 1 << endl;
        cin >> fb[i].name;
        cout << "Enter the age of employee" << i + 1 << endl;
        cin >> fb[i].age;
        cout << "Enter the Designation of employee" << i + 1 << endl;
        cin >> fb[i].Designation;
        cout << "Enter the Salary of employee " << i + 1 << endl;
        cin >> fb[i].Salary;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Details of Employee" << i + 1 << " are:" << endl;
        cout << "Name:        " << fb[i].name << endl;
        cout << "Age:         " << fb[i].age << endl;
        cout << "Designation: " << fb[i].Designation << endl;
        cout << "Salary:      " << fb[i].Salary << endl;
        cout << endl;
    }

    return 0;
}