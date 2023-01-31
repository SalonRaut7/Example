#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;

};
/*
                     public derivation   private derivation     protected derivation
1.Private members:   Not Inherited        Not Inherited         Not Inherited
2.Protected members: Protected            Private               Protected
1.Public members:    Public               Private               Protected
*/  
class derived : protected base{

};
int main(){
    base b;
    derived d;
    //cout<<d.a; //will not work since a is protected in both base and derived class
    return 0;
}