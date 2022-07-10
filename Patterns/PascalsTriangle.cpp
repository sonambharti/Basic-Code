"""
Pascal's Triangle:

             1
           1 2 1
          1 3 3 1
         1 4 6 4 1
"""
  
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of pattern: ";
  cin>>n;
  
  vector<vector<int>> res(n);
  for(int i=0; i<n; i++){
    res[i].resize(i+1);
    
    for(int j=1; j<i+1; j++){
        if (i == j || j == 0){
            res[i][j] = 1;
        }
        else{
            res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=1; j<i+1; j++){
      cout<<" "<<res[i][j];
    }cout<<endl;
  }
  return 0;

}
