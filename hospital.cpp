#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int choice,choose;
    cout<<"Enter 3 to edit details of the patient"<<endl;
    cin>>choice;
    char name[30];
    int age;
    int bedno;
    char bloodgroup[2];
    char doctornote[100];
    ofstream fwrite;
    fwrite.open("hospitalrecords.txt");
    cout<<"Enter 1 to edit bedno of the patient:"<<endl;
    cout<<"Enter 2 to edit name of the patient:"<<endl;
    cout<<"Enter 3 to edit age of the patient:"<<endl;
    cout<<"Enter 4 to edit bloodgroup of the patient:"<<endl;
    cout<<"Enter 5 to edit doctors note for the patient:"<<endl;
    cin>>choose;
    if(choose==1){
        cout<<"Enter new bedno of the patient:"<<endl;
        cin>>bedno;

    }
    else if(choose==2){
        cout<<"Enter new name of the patient:";
        cin.get(name,30);
    }
    else if(choose==3){
        cout<<"Enter new age of the patient:";
        cin>>age;
    }
    else if(choose==4){
        cout<<"Enter new bloodgroup of the patient:";
        cin>>bloodgroup;
    }
    else if(choose==5){
        cout<<"Enter new doctors note for the patient:";
        cin.get(doctornote,100);
    }
        fwrite<<"Bed No.: "<<bedno<<endl;
        fwrite<<"Name: "<<name<<endl;
        fwrite<<"Age: "<<age<<endl;
        fwrite<<"Blood group: "<<bloodgroup<<endl;
        fwrite<<"Doctor's note: "<<doctornote<<endl;
    return 0;
}