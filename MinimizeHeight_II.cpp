//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        int diff, mind, maxd;
        sort(arr, arr+n); 
        diff = arr[n-1] - arr[0];
        for(int i=1; i<n; i++){
            
            if(arr[i]>=k){
                mind = min(arr[0]+k,arr[i]-k);
                maxd = max(arr[n-1]-k,arr[i-1]+k);
                diff = min(diff, maxd-mind);
            }
            
        }
        
        return diff;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}