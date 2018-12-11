#include<iostream>
using namespace std;
int calsum(int x, int y, int z)
{

    int d;
    d=x+y+z;
    return (d);
}
int main()
{
   int t=0;
    do
    {
    int a,b,c,sum;
    cin>>a>>b>>c;
    sum=calsum(a,b,c);
    cout<<sum<<endl;
    }while(t!=10);
    return 0;
}
