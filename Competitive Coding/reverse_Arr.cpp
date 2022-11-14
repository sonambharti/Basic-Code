//reverse array using recurssion

#include <bits/stdc++.h>

using namespace std;

void rev_arr(int arr[], int l, int r){
    if(l>r){
        return;
    }
    swap(arr[l],arr[r]);
    rev_arr(arr, l+1, r-1);
    
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    rev_arr(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
