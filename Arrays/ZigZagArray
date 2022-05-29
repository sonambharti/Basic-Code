#include <bits/stdc++.h>

using namespace std;


class Solution{
public:	
	
	void zigZag(int arr[], int n) {
	    // code here
	    int i;
	    bool flag = true;
	    for(i=0; i<n-1; i++){
	        if(flag){
	            if(arr[i] > arr[i+1])
	                swap(arr[i],arr[i+1]);
	        }
	        
	        else{
	            if(arr[i] < arr[i+1])
	                swap(arr[i],arr[i+1]);
	        }
	        flag = !flag;
	        
	    }
	    
	   
	    
	    
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  
