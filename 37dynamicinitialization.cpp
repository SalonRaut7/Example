#include<iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
        BankDeposit(){}
        BankDeposit(int p,int y,float r); //r can be a value like 0.04
        BankDeposit(int p,int y,int r); //r can be a value like 4
        void show();
};
BankDeposit ::BankDeposit(int p, int y, float r){
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r){
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}
int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}