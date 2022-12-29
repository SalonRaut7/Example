#include<iostream>
using namespace std;

int main(){
    float number1,number2;
    char op;
    char choice;
    here:
    cout<<"Enter first number, operator, second number: "<<endl;
    cin>>number1>>op>>number2;
    
    switch (op){
    case '+':
        cout<<number1+number2<<endl;
        break;
    case '-':
        cout<<number1-number2<<endl;
        break;
    
    case '*':
        cout<<number1*number2<<endl;
        break;
    
    case '/':
        cout<<number1/number2<<endl;
        break;
    }
    cout<<"Do another (Y/ N)?"<<endl;
    cin>>choice;
    if (choice=='Y'){
        goto here;
    }
    

    return 0;
}