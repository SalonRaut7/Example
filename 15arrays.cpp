#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,45,86,69};
    //int marks[]={23,45,86,69};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"Printing marks using for loop: "<<endl;
    for(int i=0;i<4;i++){
        cout<<marks[i]<<endl;
    }
    //pointers and arrays
    int *ptr;
    ptr=marks;
    cout<<"The value of marks[0] using pointer is: "<<*ptr<<endl;
    cout<<"The value of marks[1] using pointer is: "<<*(ptr+1)<<endl;
    cout<<"The value of marks[2] using pointer is: "<<*(ptr+2)<<endl;
    cout<<"The value of marks[3] using pointer is: "<<*(ptr+3)<<endl;
    return 0;
}