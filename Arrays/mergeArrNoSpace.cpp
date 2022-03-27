#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1,temp, j=0;
	    if(arr1[i]<arr2[j])
	    return;
	    while(i>=0 && j<m){
	        if(arr1[i]>arr2[j])
	        {
	            temp = arr1[i];
	            arr1[i] = arr2[j];
	            arr2[j] = temp;
	            i--;
	            j++;
	        }
	        else{
	            break;
	        }
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    
	    
	    cout<<endl;
	    
	}
};

int main(){
    int n, m, i;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    Solution obj;
    obj.merge(arr1,arr2,n,m);
    for(i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}