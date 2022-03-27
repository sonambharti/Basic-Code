#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {   int n,k,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        int low = 0;
        int high = n-1;
        while(low <= high)
        {
            if(s[low++] != s[high--])
            c++;
        }
        if(c<=k)
        {
            if(n%2 == 1)
            cout<<"yes"<<endl;
            else if((k-c)%2 == 0)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
    return 0;
}