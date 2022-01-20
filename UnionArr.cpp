
// Find the Union and Intersection of the two sorted arrays. Solution

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count;
        set<int> arr; //it holds the unique value only....
        for(int i=0; i < n; i++){
            arr.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            arr.insert(b[i]);
        }
        count = arr.size();
        return count;
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}