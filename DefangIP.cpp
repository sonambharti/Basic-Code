// A user’s IP address is defanged to prevent the 
//user from clicking on a malicious link.

#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
 
string DefangIP(string str) 
{ 
	string defangIP = ""; 
	 
	for (char c : str) 
		(c == '.') ? defangIP += "[.]" : 
					defangIP += c; 
	return defangIP; 
} 

int main() 
{ 
	string str;
    cout<<"Enter a address: ";
    cin>>str;
	cout <<DefangIP(str); 
	return 0; 
} 