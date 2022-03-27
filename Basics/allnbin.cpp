#include <iostream>

using namespace std;

int toBinary(int N){
    int rem,a=1,binary=0;
 while(N>0)
    {
        rem=N%2;
        binary=binary+rem*a;
        a=a*10;
        N=N/2;
    }
    return binary;
    }

int main()
{
    int T,i;
    cout<<"Enter any value of T : ";
    cin>>T;
    for(i=0;i<T;i++)
    {
        int a[100], binary=0,s,n,k=0;
        cout<<"Enter any value of n : ";
        cin>>n;
        for(int j = 1;j<=n;j++){
            cout<<toBinary(j)<<" ";
        }
        cout<<endl;

    }

    return 0;
}
