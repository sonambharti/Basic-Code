#include <iostream>

using namespace std;
int Selection_sort(int arr[], int n, int k)
{
    int pos, min;
    min=arr[n];
    pos=n;
    for(int i=n+1; i<=k-1; i++)
    {
       if(min>arr[i])
       {
           min=arr[i];
           pos=i;
       }
    }
    return pos;
}
int main()
{
    int pos,n;
    cout<<"Enter the size array: ";
    cin>>n;
    cout<<"Enter the value elements of the array: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Selection sorting is being performed"<<endl;
    for(int j=0; j<n; j++)
    {
        pos=Selection_sort(arr,j,n);
        int temp;
        temp=arr[j];
        arr[j]=arr[pos];
        arr[pos]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
