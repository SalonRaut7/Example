#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"arithmetic operators are";
    cout<<"\nThe value of a+b is:"<<a+b;
    cout<<"\nThe value of a-b is:"<<a-b;
    cout<<"\nThe value of a*b is:"<<a*b;
    cout<<"\nThe value of a/b is:"<<a/b;
    cout<<"\nThe value of a%b is:"<<a%b;
    cout<<"\nThe value of a++ is:"<<a++;
    cout<<"\nThe value of a-- is:"<<a--;
    cout<<"\nThe value of ++a is:"<<++a;
    cout<<"\nThe value of --a is:"<<--a;
    //assignment operators
    //int x=5,c=4; used to assign value
    cout<<endl;
    cout<<"comparision operators";
    cout<<"\nThe value of a==b is :"<<(a==b); 
    cout<<"\nThe value of a!=b is :"<<(a!=b); 
    cout<<"\nThe value of a>b is :"<<(a>b); 
    cout<<"\nThe value of a<b is :"<<(a<b); 
    cout<<"\nThe value of a>=b is :"<<(a>=b); 
    cout<<"\nThe value of a<=b is :"<<(a<=b); 
    cout<<endl;
     cout<<"Logical operators";
    cout<<"\nThe value of (a==b) && (a<b) logical operator is :"<<((a==b) && (a<b)); 
    cout<<"\nThe value of !(a==b) && (a<b) logical operator is :"<<!((a==b) && (a<b)); 
    cout<<"\nThe value of (a==b) || (a<b) logical operator is :"<<((a==b) || (a<b)); 
    cout<<"\nThe value of !(a==b) || (a<b) logical operator is :"<<!((a==b) || (a<b)); 
    
    return 0;
}