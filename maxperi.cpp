#include<iostream>
using namespace std;
void maxperimeter(int arr[], int n)
{
	int maxm=0;
	for(int i=0;i<n-2;i++){
	for(int j=0;j<n-1;j++){
	for(int k=0;k<n;k++)
	{
	    int a=arr[i];
	    int b=arr[j];
	    int c=arr[k];
	    if(a < b+c && b < c+a && c < a+b)
	    {
	        maxm=max(maxm, a+b+c);
	    }
	}}}

	if(maxm)
	{
	    cout<<maxm<<endl;
	}
	else
	{
	    cout<<"-1"<<endl;
	}

}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxperimeter(arr, n);

    return 0;
}

