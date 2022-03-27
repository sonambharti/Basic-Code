#include<iostream>
using namespace std;
int main()
{
    int num, sum=0,remainder;
    cout<<"enter any number";
    cin>>num;
        while(num>0)
    {
        remainder=num%10;
        num=num/10;
        sum=sum+remainder;
        
        
    }
    cout<<"sum of digits ="<<sum;
    cout<<endl;
}