#include <iostream>

using namespace std;

int main()
{
    int a[100],n,i,j,d;
    cout<<"enter range of list"<<endl;
    cin>>n;
    cout<<"enter values in list"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
    }
    for(i=0;i<n;i++)
        {
            d=40-a[i];
            for(j=0;j<=n;j++)
        {
            if(a[j]==d)
            {
                cout<<"sum of "<<a[i]<<" AND "<<a[i+1]<< a[i]+a[i+1]<<endl;
                cout<<"position of "<<a[i]<<" = "<<i+1<<endl;
                cout<<"position of"<<a[j]<<" = "<<j+1<<endl;
            }
        }

        }
        return 0;
    }

