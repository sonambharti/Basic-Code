/*#include<iostream>
using namespace std;
int print(int n)
{
    if(n<=0)
    return 1;
    else
    {
        int p=0, result;
        while(n--)
        {
            result=print(p++);
            cout<<result<<" ";
        }
        return result;

    }

}
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    print(N);
	    cout<<endl;
	}
	return 0;
}
*/
#include<iostream>
using namespace std;
int print(int n)
{
    if(n<=0)
        return 1;
    print(n-1);
    cout<<n<<" ";
}
int main()
{
    int N;
    cin>>N;
    print(N);
    return 0;
}







