#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i, n, j, count;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        cout<<arr[i]<<" "<<count<<endl;
        i++;
        count=0;
    }
    
    
}