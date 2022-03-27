// iterative fibonacci series.......

#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{
	int a = 0;
	int b = 1;
	int m, sum=0;
	
	cout<<"Enter count till last we need fibonaci series: ";
	cin>>m;
	int n = m;
	auto start = high_resolution_clock::now();
	cout<<"Iterative Fibonaci series: "<<endl;
	//cout<<a<<" "<<b<<" ";
	while(n>1)
	{
		sum = a+b;
		//cout<<sum<<" ";
		a = b;
		b = sum;
		
		n-=1;
	}
	cout<<endl<<"Fib("<<m<<") is: "<<sum<<endl;

	auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
  
	cout <<"Time taken = "<< duration.count() << endl;
	return 0;
}
/*
5 = 995
20 = 1992
30 = 1993
40 = 1995


*/