//Using Manipulation Find No is power of 2 or not...

#include <bits/stdc++.h>

using namespace std;


bool Pow2(int n){
  
      return (n && !(n & n-1));
    
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<Pow2(num)<<" ";
    
    return 0;
}
