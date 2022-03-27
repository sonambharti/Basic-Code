/*Move all negative numbers to beginning and positive to end with constant extra space.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int j=0;

    for(i=0;i<n;i++){
        if(arr[i] < 0){
            if(i!=j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
