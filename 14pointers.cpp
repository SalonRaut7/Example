#include<iostream>
using namespace std;

int main(){
    //pointer--data type which holds address of another data type..
    int a=3;
    int *b;
    b=&a;
    //&--(address of) operator
    cout<<"The address of a= "<<&a<<endl;
    cout<<"The address of a= "<<b<<endl;
    //*--(value at address) deference operator
    cout<<"The value of a= "<<a<<endl;
    cout<<"The value of a using pointer= "<<*b<<endl;
    //pointer to pointer
    int **c;
    c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value of b is "<<**c<<endl;
    return 0;
}