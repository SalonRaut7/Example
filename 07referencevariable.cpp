#include<iostream>
using namespace std; 
int main(){
    cout<<"*******Reference Variables*******"<<endl;
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<"**********Typecasting**********";
    int a=45;
    float b=45.46;
    cout<<"\nThe value of a is: "<<(float)a;  
    cout<<"\nThe value of a is: "<<float(a);

    cout<<"\nThe value of b is: "<<(int)b;
    cout<<"\nThe value of b is: "<<int(b);
    int c=b;
    cout<<"\nThe value of c is: "<<c;
    int d=(int)b;
    cout<<"\nThe value of d is: "<<d;
    return 0;
}