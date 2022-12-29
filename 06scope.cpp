#include<iostream>
using namespace std;
int c=45;
int main(){
    int a=3,b=5;
    int c;
    c=a+b;
    cout<<"The value of c is: "<<c;
    cout<<"\nThe value of global c is: "<<::c;
    return 0;
}