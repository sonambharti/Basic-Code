#include <iostream>
#include<conio.h>
using namespace std;
#define MAXITR 10000
double func(double x)
{
    return x*x*x-x*x+2;
}
void regulafalsi(double a, double b)
{
    if(func(a)*func(b)>=0)
    {
        cout<<"You have entered wrong values of a& b";
        return;
    }
    double c;
    for(int i=1;i<MAXITR;i++)
    {
        c=(a*func(b)-b*func(a))/(func(b)-func(a));
        if(func(c)==0)
            break;
        else if(func(c)*func(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    cout<<c;
}
int main()
{
    double a=-200, b=500;
    regulafalsi(a,b);
    return 0;
}
