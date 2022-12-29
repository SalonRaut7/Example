#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static int getCount(void){
        // cout<<id; //throws error 
        cout<<"The value of count is "<<count<<endl;
    }
};
// count is the static data member of class Employee
int Employee ::count; // default value of count is 0 cause its declared static
int main()
{
    Employee Salon, Sushant, Sandesh;
    Salon.setData();
    Salon.getData();
    Employee ::getCount();

    Sushant.setData();
    Sushant.getData();
    Employee ::getCount();

    Sandesh.setData();
    Sandesh.getData();
    Employee ::getCount();
    return 0;
}