// Program to print all possible subset of a given set....

#include <iostream>

using namespace std;

void printSubset(int arr[], int n){
    int itrn;
    itrn = 1<<n;   // (1<<n) it means (2^n)
  
    for(int i = 0; i<itrn; i++){
      for(int j=0; j<n; j++){
        if(i & (1<<j)){
          cout<<arr[j]<<" ";
        }
      }cout<<endl;
    }
   
}

int main()
{
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
  
    printSubset(arr, n);
   
    return 0;
}
