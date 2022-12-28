//Print all subset of a string

#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s){
	// Code here
	vector<string> subs;
	int len = s.length();
	int n = pow(2,len)-1;
	for(int i=0; i<=n; i++)
	{
	    string str = "";
		for(int bits=len-1; bits>=0; bits--){
		    if(i & (1<<bits)){
		         str.push_back(s[len-bits-1]);
		    }
		}
		if(str.size() != 0){
		      subs.push_back(str);
		}
	}
	sort(subs.begin(), subs.end());
	return subs;
}


int main(){
	string s;
	cin >> s;
	vector<string> res = AllPossibleStrings(s);
	for(auto i : res)
		cout << i <<" ";
	cout << "\n";

	return 0;
} 
