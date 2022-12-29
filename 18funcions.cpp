#include<iostream>
using namespace std;
//Function prototype
//type function-name(arguments);
// int sum(int a,int b); ---acceptable
// int sum(int a,b); ---not acceptable
int sum(int,int); //---Acceptable
// void greet(void); ---Acceptable
void greet(); //---Acceptable
int main(){
    int num1,num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is: "<<sum(num1,num2);
    greet();
    return 0;
}
int sum(int a,int b){
    //Formal parameters a and b will be taking value from actual parameters num1 and num2
    int c;
    c=a+b;
    return c;
}
void greet(){
    cout<<"\nHello, Have a good time.";
}