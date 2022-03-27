#include<iostream>
#include<conio.h>
using namespace std;
#define ERR 0.01
double func(double x)
{
  return(2-x*x);
}
void bisection(double a, double b)
{
  int i=0;
  if (func(a)*func(b)>=0.0)
  {
    cout<<"Value of a & b is wrong.";
    return;
  }
  double c=a;
  while((b-a)>=ERR)
  {
    i++;
    c=(a+b)/2;
    if(func(c)==0.0)
    {
      break;
    }
    else if(func(a)*func(c)<0.0)
    {
      b=c;
    }
    else
      a=c;
  }
  cout<<"ROOT: "<<c<<endl;
  cout<<"No. of iteration: "<<i;
  return;
}
int main()
{
  double a=0,b=2;
  bisection(a,b);
  return 0;
}
  
