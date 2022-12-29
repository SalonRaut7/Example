#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};
int main(){
    point p1,p2,p3;
    cout<<"Enter the X and Y Cordinates of first point: ";
    cin>>p1.x>>p1.y;
    cout<<endl<<"Enter the X and Y Cordinates of second point: ";
    cin>>p2.x>>p2.y;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    cout<<"Cordinates of P1+P2 are:"<<p3.x<<","<<p3.y<<endl;
   

    return 0;
}