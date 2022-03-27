#include <iostream>
using namespace std;
int main(){
    int n, i, min, max;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl<<"Print the min and max value of the array..."<<endl;
    if(n==1){
        min = arr[n-1];
        max = arr[n-1];
    }
    else{
        min = arr[0];
        max = arr[0];
        for(i=1; i<n; i++){
            if(arr[i] < min){
                min = arr[i];
            }
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    cout<<"Min element of the array is: "<<min<<endl;
    cout<<"Max element of the array is: "<<max;

    return 0;
}
