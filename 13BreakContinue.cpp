#include<iostream>
using namespace std;

int main(){
    cout<<"Break statement for exiting the loop for a specified condition";
    for(int i = 0; i < 10; i++){
        if (i == 4) {
             break;
        }
        cout << i << "\n";
    } 
    cout<<"Continue statement for jumping into next iteration";
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;  //Here it breaks the 4th iteration and jumps to 5th iteration
        }
        cout << i << "\n";
    } 
    return 0;
}