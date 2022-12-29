#include<iostream>
using namespace std;
int main(){
    cout<<"FOR LOOP: \n";
    for(int i=0;i<5;i++){
        cout<<"This is for loop"<<endl;
    }
    cout<<"WHILE LOOP: \n";
    int j=0;
    while(j<5){
        cout<<"This is while loop"<<endl;
        j++;
    }
    int k=0;
    cout<<"DO-WHILE LOOP: \n";
    do{
        cout<<"This is do while loop"<<endl;
        k++;
    }while(k<5);

    return 0;
}