#include<iostream>
#include<string.h>
using namespace std;
void swap(char &x,char &y)
{
    char temp;
    temp=x;
    x=y;
    y = temp;
}
void permute(char *a, int n, int r)
{
    int i;
    if (n==r)
    cout<<a<<" ";
    else
    {
        for(i=n;i<=r;i++)
        {
            swap(a[n],a[i]);
            permute(a, n+1, r);
            swap(a[n],a[i]);
        }
    }
}
int main()
 {
	//code
	int T,k;
	cin>>T;
	char str[10];
	while(T--)
	{
        cin>>str;
        k=strlen(str);
        permute(str, 0, k-1);
        cout<<endl;
	}

	return 0;
}
