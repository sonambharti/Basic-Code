#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter any value of t : ";
    cin>>t;
    while(t--)
    {
        int i=0, j=1, k=1, n, s=0,u=0;
        cout<<"Enter any value of n : ";
        cin>>n;
        cout<<"Below is the Fibonacci series : ";
        cout<<u<<" ";
        while(s<n)
        {
            cout<<k<<" ";
            k=i+j;
            i=j;
            j=k;
            s++;
        }
        cout<<endl;
    }
    return 0;


}