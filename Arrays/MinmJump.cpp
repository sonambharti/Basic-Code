//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/
#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump = 1;
        int step = arr[0];
        int max_reach = arr[0];
        if(n == 1){
            return 0;
        }
        else if(arr[0] == 0){
                return -1;
        }
        else{
            for(int i=1; i<n; i++){
                if(i==n-1){
                    return jump;
                }
                max_reach = max(max_reach,i+arr[i]);
                step--;
                if(step == 0){
                    jump++;
                    if(i>=max_reach)
                        return -1;
                    step = max_reach-i;
                }
                
                
                
            }
        }
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  