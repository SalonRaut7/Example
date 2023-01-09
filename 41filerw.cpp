#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting out file with hout stream
    ofstream hout("sample40a.txt");

    //creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    //writing a string to the file
    hout<<"My name is " + name;
    hout.close();
    ifstream hin("sample40a.txt");
    string st;
    //hin>>st;  //this will only print until whitespace occurs
    getline(hin,st);
    cout<<"The content of the file is: "<<st;
    return 0;
}