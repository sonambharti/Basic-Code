#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, q;
	cout<<"Enter array size: ";
    cin>>p;
	cout<<"Enter unique value for which pair has to be found: ";
	cin>>q;
    int a[p];
    int i, j;
    int count = 0;
    
	cout<<"Enter the array elements: ";
    for(i=0;i<p;i++){
        cin>>a[i];
    }
    
    for(i=0;i<p;i++){
        for(j=i+1;j<p;j++){
            if(abs(a[i]-a[j]) == q){
                count++;
            }
        }
    }
    cout<<"No. of pair found = "<<count;

    return 0;
}
