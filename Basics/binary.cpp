#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cout<<"Enter no. of execution of output you want : ";
    cin>>t;
    for(i=1;i<=t;i++)
    {int num, rem,binary=0,a=1;
    cout<<"enter any number : ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        binary=binary+rem*a;
        a=a*10;
        num=num/2;

    }
    cout<<"binary of the given no is : "<<binary;
    cout<<endl;
    }
    return 0;
}

