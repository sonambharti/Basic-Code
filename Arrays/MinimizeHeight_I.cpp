//https://practice.geeksforgeeks.org/problems/minimize-the-heights-i/1/#

#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int diff;
        sort(arr, arr+n); 
        diff = arr[n-1] - arr[0];
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;
        for(int i=0; i<n; i++){
            int mind, maxd;
            mind = min(smallest,arr[i+1]-k);
            maxd = max(largest,arr[i]+k);
            
            diff = min(diff, maxd-mind);
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