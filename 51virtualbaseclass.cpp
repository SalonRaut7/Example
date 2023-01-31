#include<iostream>
using namespace std;
/*
Inheritance:
student-->Test
student-->sports
test-->result
sports-->result
*/
class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"Your roll number is: "<<roll_no<<endl;
    }
};
class Test : virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"Your result is here: "<<endl
            <<"Maths="<<maths<<endl
            <<"Physics="<<physics<<endl;
    }

};
class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your PT score is: "<<score<<endl;
    }
};
class result : public Test,public sports{
    private:
    float total;
    public:
    void display(){
        total=physics+maths+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
    }
};
int main(){
    result salon;
    salon.set_number(557);
    salon.set_marks(78.9,99.5);
    salon.set_score(9);
    salon.display();

    return 0;
}