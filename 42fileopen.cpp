#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample42.txt");
    out<<"This is me"<<endl;
    out<<"This is also me"<<endl;
    out<<"IDK"<<endl;
    out.close();
    ifstream in;
    string st1,st2;
    in.open("sample42.txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;
    while(in.eof()==0){
        getline(in,st1);
        cout<<st1<<endl;
    }
    in.close();
    return 0;
}