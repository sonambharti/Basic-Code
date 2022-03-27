#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int count = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            count += (arr[i]-arr[i-1]);
        }
    }
    cout<<count;
   

    return 0;
}