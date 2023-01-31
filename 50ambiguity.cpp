#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"K xa halkhabar?"<<endl;
    }
};
class Derived : public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base1::greet();
        Base2::greet();
    }
};

class B{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D:public B{
    //D's new say() method will override base class's say() method
    int a;
    public:
    void say(){
        cout<<"Hello Earth"<<endl;
    }
};
int main(){
    //Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();

    //Ambiguity 2
    B b1;
    b1.say();
    D d1;
    d1.say();

    return 0;
}