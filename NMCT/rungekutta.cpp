#include<iostream>
#include<cmath>
using namespace std;
float dydx(float x, float y)
{
    return ((x-y)/2);
}
float rungekutta(float x0,float y0,float x,float h)
{
    int n = int((x-x0)/h);
    float r1, r2, r3, r4;
    float y = y0;
    for(int i=0; i<=n; i++)
    {
        r1 = h * dydx(x0,y);
        r2 = h* dydx(x0+0.5*h, y+0.5*r1);
        r3 = h* dydx(x0+0.5*h, y+0.5*r2);
        r4 = h* dydx(x0+h, y+r3);
        y = y+(1/6)*(r1+2*r2+2*r3+r4);
        x0 = x0+h;
    }
    return y;
}
int main()
{
    float x0=0, y=1, x=2, h=0.2;
    float y1 = rungekutta(x0,y,x,h);
    cout<<"The value of y at x is: "<<y<<endl;
    return 0;
}