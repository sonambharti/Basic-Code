#include <iostream>

using namespace std;
int merge(int B[], int low, int mid, int high);
int mergesort(int A[], int l, int h)
{
    int middle;
    if(l<h)
    {
        middle=(l+h)/2;
        mergesort(A,l,middle);
        mergesort(A,middle+1,h);
        merge(A, l, middle, h);
    }
}
int merge(int B[], int low, int mid, int high)
{
    int C[20], i, j, k=0;
    i=low;
    j=mid+1;
    while(i<=mid && j<=high)
    {
        if(B[i]<B[j])
            C[k++]=B[i++];
        else
            C[k++]=B[j++];
    }
    while(i<=mid)
        C[k++]=B[i++];
    while(j<=high)
        C[k++]=B[j++];
    for(int i=high; i>=low; i--)
        B[i]=C[--k];
}

int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements: ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
    cout<<"Merge sorting is being performed......"<<endl;
    mergesort(arr, 0, size-1);
    cout<<"Sorted elements are: ";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    return 0;
}
