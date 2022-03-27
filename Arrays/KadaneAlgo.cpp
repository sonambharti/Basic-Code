#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum = 0;
        int max_sum = INT_MIN;
        for(int i=0; i<n; i++){
            sum += arr[i];
            max_sum = max(max_sum, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return max_sum;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}