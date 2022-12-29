#include<iostream>
using namespace std;
void wrongswap(int a,int b);
void swap(int *a,int *b);
void swapReferenceVar(int &a, int &b);
int & swapreferenceVar(int &a, int &b);
int main(){
    int x=3,y=4;
    cout<<"The value of x is "<<x<<" and the value of y before swap is "<<y<<endl;
    //wrongswap(x,y);  //WILL NOT WORK DUE TO CALL OF VALUE
    //swap(&x,&y);  //WILL WORK DUE TO CALL OF REFERENCE USING POINTERS
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    //swapreferenceVar(x, y)=766;
    cout<<"The value of x is "<<x<<" and the value of y after swap is "<<y<<endl;
}
void wrongswap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
     int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swapReferenceVar(int &a, int &b){    
    int temp = a;            
    a = b;               
    b = temp;             
}
int & swapreferenceVar(int &a, int &b){
     int temp = a;          
    a = b;              
    b = temp;            
    return a;
}