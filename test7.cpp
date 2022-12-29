#include<iostream>
using namespace std;
union book{     
  int sr;
  char name[20];
  float price;
 };

int main()
{
   book vr;

  cout<<"Enter Serial No.: ";
  cin>>vr.sr;
  cout<<"Enter Book Name : ";
  gets(vr.name);
  cout<<"Enter Book Price: ";
  cin>>vr.price;

  cout<<"\nSerial No.: "<<vr.sr;    // garbage value will be print
  cout<<"\nBook Name : "<<vr.name;   // garbage value will be print
  cout<<"\nBook Price: "<<vr.price;  // accurate value be print
return 0;
}