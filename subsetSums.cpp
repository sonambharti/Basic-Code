/*
Given a list arr of N integers, print sums of all subsets in it.
*/
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:

    void subsetSums(vector<int> arr, vector<int> &res, int indx, int N, int s)
    {
        // Write Your Code here
        if(indx == N){
            res.push_back(s);
            return;
        }
        
        s += arr[indx];
        subsetSums(arr, res, indx+1, N, s);
        s -= arr[indx];
        subsetSums(arr, res, indx+1, N, s);
        
        
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        
        vector<int> res;
        subsetSums(arr, res, 0, N, 0);
        sort(res.begin(), res.end());
        return res;
    }
};

// Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
