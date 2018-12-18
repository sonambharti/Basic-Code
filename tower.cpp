#include<iostream>
using namespace std;
int w;
void tower(int n, int f, int s, int th, int &w)
{
    if(w==0 || n<0)
    return;
    if(n==1)
    {
        w--;
        if(w==0)
        {
            cout<<f<<" "<<th<<endl;
        }
        return;
    }
    tower(n-1, f, th, s, w);
    tower(1, f, s, th, w);
    tower(n-1, s, f, th, w);
}
int main()
{
    int T, p, q;
    cin>>T;
    while(T--)
    {
        cin>>p>>q;
        tower(p, 1, 2, 3, q);
    }
    return 0;
}