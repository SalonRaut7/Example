#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;
union money
{
    /* data */
    int rice;//kunei euta data type use garxu union ma so c++ shares memory in between the contained data type inside union
    char car;
    float pounds;  //maximum size of data type jati xa teti nei memory allocate garxa
};

int main(){
    struct employee salon;
    ep roshan;
    salon.eId=1;
    salon.favChar='R';
    salon.salary=209.9;
    cout<<salon.eId<<endl;
    cout<<salon.favChar<<endl;
    cout<<salon.salary<<endl;
    union money m1;
    m1.rice=34;
    m1.car='C';
    cout<<m1.rice<<endl; //C ko ascii value auxa kinaki overwrite huncha cause ekchoti ma euta matra use garnu milcha union ma
    cout<<m1.car<<endl;
    enum meal{breakfast,lunch,dinner};
    meal m3=breakfast;
    cout<<m3<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}