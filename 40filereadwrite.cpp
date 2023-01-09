#include<iostream>
#include<fstream>
using namespace std;
/*
These are some useful classes for working with files in C++
   1. fstreambase
   2. ifstream --> derived from fstreambase
   3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
   1. Using the constructor
   2. Using the member function open() of the class
*/
int main(){
    string st="Sawlown";
    string st2;
    //Opening files using constructor and writing it
    ofstream out("sample40a.txt");   //ofstream is used for writing file
    out<<st;

    //Opening files using constructor and reading it
    ifstream in("sample40b.txt");    //ifstream is used for reading from file
    //in>>st2;   
    //cout<<st2;   //this will only print the data until the space is encountered.
    getline(in,st2); //this will print the single line
    cout<<st2;  
    return 0;
}