//Find if No. is power of 2 or not

#include<iostream>
using namespace std;

int pow2(int num){
    if(num == 0)
        return 0;
    while(num != 1){
        if(num%2 != 0){
            return 0;
        }
        num = num/2;
        
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int res = pow2(num);
    
    if(res == 0){
        cout << "Not a power of 2.";
    }
    else{
        cout << "Power of 2.";
    }
    
    return 0;
}
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
