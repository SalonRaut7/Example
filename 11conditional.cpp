#include<iostream>
using namespace std;
int main(){
    int x = 20;
    int y = 18;
    cout<<"if statement: ";
    if (x > y) {
        cout << "x is greater than y";
    } 
    cout<<endl;
    cout<<"else statement: ";
    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    }
    else {
        cout << "Good evening.";
    }
    cout<<endl;
    cout<<"else if statement: ";
    int time1 = 22;
    if (time1 < 10) {
        cout << "Good morning.";
    } 
    else if (time1 < 20) {
        cout << "Good day.";
    } 
    else {
        cout << "Good evening.";
    }
    cout<<endl;
    cout<<"short-hand if else (Ternary operators): ";
    int time2 = 20;
    string result = (time2 < 18) ? "Good day." : "Good evening.";
    cout << result;
    cout<<endl;
    cout<<"Switch statement: ";
    int day = 0;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout <<"Salon";
    }
    return 0;
}