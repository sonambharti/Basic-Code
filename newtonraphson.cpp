#include<bits/stdc++.h>
#include<iostream>
#define EPSILON 0.001
using namespace std;
double func(double x)
{
    return(x*x*x-x*x+2);
}
double derivfunc(double x)
{
    return(3*x*x-2*x);
}
void newtonraphson(double x)
{
    double h = func(x)/derivfunc(x);
    while(abs(h)>=EPSILON)
    {
        h = func(x)/derivfunc(x);
        x = x-h;
    }
    cout<<"The value of the root is: "<<x;
}
int main()
{
    double x0 = -20;
    newtonraphson(x0);
    return 0;
}