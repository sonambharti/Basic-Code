//Print 1 to 200 without using loop...

#include <iostream>
using namespace std;

void printN(int num){
    if(num==0){
        return;
    }
    //cout<<num<<endl;//descending order
    printN(num-1);
    cout<<num<<endl;//ascending order
}
int main()
{
    int N = 200;
    //cin>>N;
    printN(N);

    return 0;
}
