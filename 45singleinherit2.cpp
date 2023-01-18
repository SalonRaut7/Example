#include<iostream>
using namespace std;
class Base
{
int data1;  //private by default and is not inheritable
public:
   int data2;
   void setdata();
   int getdata1();
   int getdata2();
};
void Base :: setdata(void){
    data1=10;
    data2=20;
}
int Base :: getdata1(){
    return data1;
}
int Base :: getdata2(){
    return data2;
}
class Derived : private Base{  //class is being derived privately
    int data3;
    public:
    void process();
    void display();
};
void Derived :: process(){
    setdata(); 
    data3=data2*getdata1();
}
void Derived :: display(){
    cout<<"Value of data1 is "<<getdata1()<<endl;
    cout<<"Value of data2 is "<<data2<<endl;
    cout<<"Value of data3 is "<<data3<<endl;
}

int main(){
    Derived der;
    // der.setdata(); cannot be called as setdata was inherited from base class privately
    der.process();
    der.display();
    return 0;
}