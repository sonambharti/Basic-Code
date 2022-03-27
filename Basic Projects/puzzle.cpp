#include"puzzle.h"
#include<iostream>
using namespace std;
int main()
{
    int U, R;
    cout<<"Enter the value of U: ";
    cin>>U;
    cout<<"Enter the value of R: ";
    cin>>R;
    int ways= f(U,R);
    cout<<ways;
    return 0;
}