#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int count0=0, count1=0, count2=0;
        int i;
        
        for(i=0; i<n; i++){
            if(a[i]==0){
                count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else if(a[i]==2){
                count2++;
            }
        }
        
        
        for(i=0; i<count0; i++){
            a[i] = 0;
        }
        int m = count0+count1;
        for(i=count0; i<m; i++){
            a[i] = 1;
        }
        
        for(i=m; i<n; i++){
            a[i] = 2;
        }
        
        
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  
