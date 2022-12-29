// Using the above class, find the volume of wall and number of bricks used in wall.
#include <iostream>
#include <math.h>
using namespace std;
class wall
{
    float l, v, b, h, V, N;

public:
    void setdata(float a, float br, float c)
    {
        l = a;
        b = br;
        h = c;
    }
    float vol()
    {
        return (l * b * h);
    }

    void setvolofbrick(float x)
    {
        v = x;
    }
    float number()
    {
        V = vol();
        return (V / v);
    }
};
int main()
{
    wall w;

    w.setdata(6, 5, 4);
    w.setvolofbrick(0.5);

    cout << "The volume of wall is: " << w.vol() << endl;
    cout << "The number of bricks used in wall is: " << w.number();
    return 0;
}