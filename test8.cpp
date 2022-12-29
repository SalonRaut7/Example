#include <iostream>
#include <string>
using namespace std;

class Hospital
{
    public:
    int bedno;
    //char name[100];
    string name;
    int age;
    char bloodgroup[5];
  //  int systolicbp;
    //int diastolicbp;
    //int temperature;
   // string doctornote;
    char doctornote[100];

    int display(){
    cout<<"Enter 1 to input the details of the patient / admit the patient\n";
    cout<<"Enter 2 to view the details of the patient\n";
    cout<<"Enter 3 to quit the program\n";
    int option;
    cin>> option;
    return option;
    }

    void admit(){
            cout<<"Enter the bed no\n";
            cin>>bedno;

            cin.sync();
            cout<<"Enter the name\n";
            getline(cin,name);
           // cin.get(name,100);

            cout<<"Enter the age\n";
            cin>>age;

            cout<<"Enter the blood group\n";
            cin>>bloodgroup;

            cin.sync();
            cout<<"Enter the doctors note\n";
            cin.get(doctornote,100);  
            // cin>>doctornote;
    }

    void view(){
            cout<<"\n\n\n<------------------------------------------------------------------------------->\n"; 
            cout<<"The bed no. of the patient : "<<bedno<<endl;

            cout<<"The name of the patient "<<name<<endl;
            
            cout<<"The age: "<<age<<endl;
            
            cout<<"The blood group: "<<bloodgroup<<endl;
            
            cout<<"The doctors note: "<<doctornote<<endl;
            cout<<"<------------------------------------------------------------------------------->\n\n\n";
    }
};

int main()
{
    Hospital patient[20];

    int value = 0;
    int count = 0;
    int bedn;
    while(value!=3){
        value = patient[count].display();

        if(value==1)
        {
            patient[count].admit();
            count++;
        }

        else if (value ==2)
        {
            cout<<"Enter the bed number of the patient  ";
            int check=0;
            cin>>bedn;
            for(int i=0;i<20;i++){
                if(patient[i].bedno == bedn){
                    patient[i].view();
                    check++;
                    break;
                }
            }
            if(check==0){
                cout<<"\nThe patient is yet to be admitted to that bed\n\n\n";
            }
        }
    }
    cout<<"\n\n<------------------------------------------------------------------------------->\n"; 
    cout<<"Thank You";

}

    