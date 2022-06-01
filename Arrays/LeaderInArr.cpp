// An element of array is leader if it is greater than or equal to all the elements 
// to its right side. The rightmost element is always a leader. 

#include <bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        int i;
        int max_right = a[n-1];
        res.push_back(max_right);
        for(i=n-2; i>=0; i--){
            if(max_right <= a[i]){
                max_right = a[i];
                res.push_back(max_right);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};



int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        
        vector<int> v = obj.leaders(a, n);
        
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  
