#include <iostream>
using namespace std;
int trailing_zeroes(int num){
    int count = 0;
    while (num > 0)
    {
        num /= 5;
        count += num;        
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter any no. whose factorial trailing zero has to be found: "<<endl;
    cin>>num;

    cout<<"Count of zeroes will be "<<trailing_zeroes(num)<<endl;
    return 0;
}