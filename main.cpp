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







