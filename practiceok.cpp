#include<iostream>
using namespace std;

int main(){
    bool convo=true;
    string boy,girl="Umm.";
    while (convo!=false)
    {
        cout<<"Boy:";
        getline(cin,boy);
        // cout<<"Boy: "<<boy<<endl;
        // getline(cin,girl);
        cout<<"Girl: "<<girl<<endl;
        if(boy=="Good night"){
            cout<<"Girl: Lala"<<endl;
            convo=false;
        }
    }
    
    return 0;
}