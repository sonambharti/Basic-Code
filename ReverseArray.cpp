#include <iostream>
using namespace std;
int main(){
    int n, i, start, end, temp;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //Reverse the array...
    start = 0;
    end = n-1;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<endl<<"Print the reverse of the array..."<<endl;

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
