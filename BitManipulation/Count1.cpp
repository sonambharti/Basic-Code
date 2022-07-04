//Count No of ones in a binary no.

#include <bits/stdc++.h>
using namespace std;


int countNo1(int n){
    int count=0;
    while(n){
        n=n & (n - 1);
        count++;
    }
    return count;
    
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<countNo1(num)<<" ";
    
    return 0;
}
