// Write  a  program  to  add  time  objects   of two different classes making member function of one class as 
//friend of another class
#include <iostream>
using namespace std; 
class time1;
class time2{
    int hour, minute, second;
    public:
    void set(){
        cout<<"Enter time in hour,minute and second:"<<endl;
        cin>>hour;
        cin>>minute;
        cin>>second;
    }
      void add(time1 t1);
     void display(){
        cout<<"The time after addition is:"<<hour<<"/"<<minute<<"/"<<second<<endl;
    }
};
class time1{
    int hour, minute, second;
    public:
    void set(){
        cout<<"Enter time in hour,minute and second:"<<endl;
        cin>>hour;
        cin>>minute;
        cin>>second;
    }
    friend void time2:: add(time1);
};
void time2::add(time1 t1){
        hour=t1.hour+hour;
        minute=t1.minute+minute;
        second=t1.second+second;
        
        if(minute>=60){
            hour=hour+1;
            minute=minute-60;
        }
        if(second>=60){
            minute=minute+1;
            second=second-60;
        }
    }
int main(){
    time1 t1;
    time2 t2;
    t1.set();
    t2.set();
    t2.add(t1);
    t2.display();
 return 0;
}