#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i, k, j, count;
    cout<<"Enter the size of array: ";
    cin>>k;
    int arr[k];
    cout<<"Enter the element of array: ";
    for(i=0; i<k; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<k;)
    {
        for(j=0;j<k;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        cout<<arr[i]<<" "<<count<<endl;
        i++;
        count=0;
    }
    
    
}
