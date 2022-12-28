//find the count of ways to consecutive sum to get a no.

#include <bits/stdc++.h>
using namespace std;

long int countSumConsecutive(long int N)
{
	// constraint on values of L gives us the
	// time Complexity as O(N^0.5)
	long int count = 0;
	for (long int L = 1; L * (L + 1) < 2 * N; L++) {
		double a = (1.0 * N - (L * (L + 1)) / 2) / (L + 1);
		if (a - (int)a == 0.0)
			count++;
	}
	return count;
}

// Driver Code
int main()
{
	long int N;
	cin>>N;
	cout << countSumConsecutive(N) << endl;
	
	return 0;
}
