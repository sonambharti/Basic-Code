#include<iostream>
using namespace std;
int main()
{
    int t, i, n;
    cout<<"Enter any value for t : ";
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Enter the value of n :";
        cin>>n;
        switch(n)
        {
            case 1:
            cout<<"6\n";
            break;
            case 2:
            cout<<"5\n";
            break;
            case 3:
            cout<<"4\n";
            break;
            case 4:
            cout<<"3\n";
            break;
            case 5:
            cout<<"2\n";
            break;
            case 6:
            cout<<"1\n";
            break;
        
        }
        
    }
    return 0;
}