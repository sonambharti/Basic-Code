/*
calculate function: f(n) = -1+2-3+....+(-1)^n n
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, sum;
    cin>>n;
    if(n%2 == 0)
    sum = n/2;
    else
    sum = ((n+1)/2) * (-1) ;
    cout<<sum; 

    return 0;
}
