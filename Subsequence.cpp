#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	int seqIdx = 0;
	
	for(int i=0; i<array.size();){
		if((seqIdx == sequence.size()-1) && sequence[seqIdx] == array[i])
			return true;
		if(sequence[seqIdx] == array[i]){
			i++;
			seqIdx++;			
			continue;
		}
		else{
			i++;
			continue;
		}
	}
  return false;
}

int main(){
    int m, n, a, b;
    vector<int> arr;
    vector<int> seq;
    cout<<"Enter the size of array: ";
    cin>>m;
    cout<<endl;
    for(int i=0; i<m; i++){
        cin>>a;
        arr.push_back(a);
        cout<<" ";
    }
    cout<<endl;
    cout<<"Enter the size of subsequence array: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cin>>b;
        seq.push_back(b);
        cout<<" ";
    }
    cout << isValidSubsequence(arr, seq) <<endl;

    return 0;    
}
