#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s;
    int n,i,j=0,k;
    n=s.size();
    for(i=0;i<n;i++)
    {
        a[0]=s[i];
        k = stoi(a);
        if(k==4 || k==7){
            j+=1;
        }
    }
    if(j==4 || j==7)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}