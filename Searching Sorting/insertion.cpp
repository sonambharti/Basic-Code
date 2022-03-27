#include <iostream>

using namespace std;
int insertion_sort(int arr[], int n)
{
    int temp,i, j;
    for(i=1; i<n; i++)
    {
       temp=arr[i];
       for(j=i-1; j>=0 && temp<arr[j]; j--)
            arr[j+1]=arr[j];
       arr[j+1]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values for array elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Insertion sort is being completed here"<<endl;
    insertion_sort(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
