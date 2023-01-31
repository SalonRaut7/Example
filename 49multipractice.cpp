#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?  -->Multiple Inheritance
    Q2. Which mode of Inheritance are you using? -->Public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented? -->It is implemented because we reuse the typed code in derived class
*/
class SimpleCalculator{
    protected:
    int num1,num2;
    public:
    void getinput(int a,int b){
        num1=a;
        num2=b;
    }
    void display(){
        cout<<"Sum="<<num1+num2<<endl;
        cout<<"Difference="<<num1-num2<<endl;
        cout<<"Product="<<num1*num2<<endl;
        cout<<"Division="<<num1/num2<<endl;
    }
};
class ScientificCalculator{
    protected:
    int num1,num2;
    public:
     void getinput(int a,int b){
        num1=a;
        num2=b;
    }
    void display(){
        cout<<"The square root of first number is: "<<sqrt(num1)<<endl;
        cout<<"The square root of second number is: "<<sqrt(num2)<<endl;
        cout<<"The cube root of first number is: "<<cbrt(num1)<<endl;
        cout<<"The cube root of second number is: "<<cbrt(num2)<<endl;
    }
};
class HybridCalculator : public SimpleCalculator,public ScientificCalculator{
    public:
    void show(int a,int b){
        SimpleCalculator::getinput(a,b);
        SimpleCalculator::display();
        ScientificCalculator::getinput(a,b);
        ScientificCalculator::display();
    }
};
int main(){
    int x,y;
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>>y;
    HybridCalculator calc;
    calc.show(x,y);
    return 0;
}
/*
class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};
int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}

*/