#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance
class DerivedC : visibility_mode Base1,visibility_mode Base2
{
    Class body of class "DerivedC"
};
*/
class Base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The sum of these values is "<<base1int+ base2int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int-->protected
    base2int-->protected
Member functions:
    setbase1int(int)-->public
    setbase2int(int)-->public
    show()-->public
*/
int main()
{
    Derived salon;
    salon.setbase1int(25);
    salon.setbase2int(5);
    salon.show();
    return 0;
}