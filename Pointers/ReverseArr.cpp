/******************************************************************************
Reverse an array using pass by pointer parameter

*******************************************************************************/
#include <iostream>
using namespace std;

void reverseArr(int* arr, int n){ // Pass by pointer (Formal Parameter)
    int start=0, end=n-1;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    reverseArr(arr, n); // Actual parameter
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
