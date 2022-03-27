#include<iostream>
using namespace std;
void subsetsum(int arr[], int n)
{
    int total = 1<<n;
    for(int i=0;i<total;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            sum+=arr[j];
         
        }cout<<sum<<" ";
    }
}
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int N = sizeof(arr)/sizeof(arr[0]);
	    subsetsum(arr,N);
	}
	return 0;
}