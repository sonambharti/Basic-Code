// Buffer Overflow Attack Example......

/*
*In a buffer-overflow attack, the extra data sometimes holds specific
 instructions for actions intended by a hacker or malicious user; 
 for example, the data could trigger a response that damages files,
 changes data or unveils private information.
 
 like segmentation fault.
*/

#include <bits/stdc++.h>

using namespace std;

void funBoA(char *str){
	char boA[6];
	strcpy(boA, str);
	cout<<"Value of input in buffer is : "<<boA<<endl;
	
}

int main()
{
	funBoA("BoAExample");
	return 0;
}
/*
OutPut:
Value of input in buffer is : BoAExample
*** buffer overflow detected ***: ./prog terminated
*/

