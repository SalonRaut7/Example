#include<iostream>
using namespace std;
// Base Class
class employee{
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid){
        id=inpid;
        salary=34.0;
    }
};

// Syntax for derived class
/* class {{Derived-class-name}} : visibility-mode {{base-class-name}}
{
   class members/methods etc..
};
Note:
1. Default visibility mode is private.
2. Public visibility mode : Public members of the base class becomes public member of derived class.
3. Private visibility mode : Public members of the base class becomes private member of derived class.
4. Private members are never inheritated.
*/
// creating a programmer class derived from employee base class
class programmer : employee{
    public:
    programmer(int inpid){
        id=inpid;
    }
    int languageCode=9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employee salon(1),sushant(2);
    cout<<salon.salary<<endl;
    cout<<salon.salary<<endl;
    programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getdata();
    return 0;
}