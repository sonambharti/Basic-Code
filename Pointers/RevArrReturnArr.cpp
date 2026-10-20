/******************************************************************************
Reverse an array and return a array reference

*******************************************************************************/
#include <iostream>
using namespace std;

/*
int* reverseArr(int* arra, int n){ // Pass by pointer (Formal Parameter)
    int start=0, end=n-1;
    while(start<=end){
        int temp = arra[start];
        arra[start] = arra[end];
        arra[end] = temp;
        
        start++;
        end--;
    }
    return arra; // This will also change the original array.
}
*/

int* reverseArr(int* arr, int n){ // Pass by pointer (Formal Parameter)
    int* arra = new int[n]; // Allocate memory on the heap
    for(int i=0; i<n; i++){
        arra[i] = arr[i];
    }
    int start=0, end=n-1;
    while(start<=end){
        int temp = arra[start];
        arra[start] = arra[end];
        arra[end] = temp;
        
        start++;
        end--;
    }
    return arra;
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
    
    int* res = reverseArr(arr, n); // Actual parameter
    
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
