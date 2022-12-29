//Find the diameter of a sphere whose volume 
// is equal to the volume of two spheres having their volume 27 cm3 and 82 cm3. 

#include<iostream>
#include<math.h>
using namespace std;
class volume{
    int volume1;
    int volume2;
    float radius;
    public:
        void setdata(int vol1,int vol2){
            volume1=vol1;
            volume2=vol2;
        }
        void calculate(){
            radius=cbrt((((volume1+volume2)*3)/(4*3.14)));
            
        }
        void display(){
            cout<<"The diameter of the required sphere is: "<<2*radius;
        }
};
int main(){
    volume v;
    v.setdata(27,82);
    v.calculate();
    v.display();
    return 0;
}