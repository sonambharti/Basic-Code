//Brute Force Approach....

#include <iostream>
using namespace std;
int main(){
    int n, i, sum=0, start, end, t_sum, count=0;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target sum we need...."<<endl;
    cin>>t_sum;
    for(i=0; i<n; i++){
        start = i;
        end = start+1;
        sum = arr[start] + arr[end] ;
        while(sum < t_sum){
            end = start+1;
            sum += arr[end];
        }
        if(sum == t_sum){
            count++;
        }
    }

    cout<<"No. of subsequence will be : "<<count<<endl;
        
    return 0;
}
