// recursive fibonaci......

#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int fib(int n){
	int res;
	
	if(n <= 1)	return n;
	
	else{
		res = (fib(n-1) + fib(n-2));		
	}
	return res;
}

int main()
{
	int n;
	
	cout<<"Enter count till last we need fibonaci series: ";
	cin>>n;

	auto start = high_resolution_clock::now();
	cout<<"Recursive Fibonaci series: "<<endl;
	
	cout<<"Fib("<<n<<") is : "<<fib(n)<<endl;
	auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
  
	cout <<"Time taken = "<< duration.count() << endl;
	
	return 0;
}
/*
5 = 3428
20 = 6396
30 = 16820
40 = 877261
42 = 2333510
45 = 9964658
*/
