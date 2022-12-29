/*Create a structure called employee with the following details as variables within it.
  i. Name of the employee ii.Age iii. Designation iv.Salary 
 Write a C++ program to create array of objects for the structure to access these
 and print the name, age, designation and salary */
#include<iostream>
using namespace std;
class employee{
    char name[25];
    int age;
    char Designation[30];
    float Salary;
    public:
        void setData(void){
            cout<<"Enter the name of employee: "<<endl;
            cin>>name;
            cout<<"Enter the age of employee"<<endl;
            cin>>age;
            cout<<"Enter the Designation of employee"<<endl;
            cin>>Designation;
            cout<<"Enter the Salary of employee "<<endl;
            cin>>Salary;
        }
        void getData(void){
            cout<<"Name:        "<<name<<endl;
            cout<<"Age:         "<<age<<endl;
            cout<<"Designation: "<<Designation<<endl;
            cout<<"Salary:      "<<Salary<<endl;
        }
};
int main(){
    employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setData();
    }
    for(int i=0;i<4;i++){
        cout<<"Details of Employee "<<i+1<<" are:"<<endl;
        fb[i].getData();
        cout<<endl;
    }
    return 0;
}