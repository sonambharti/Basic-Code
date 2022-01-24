/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void findDuplicate(vector<int> nums) {
        int size = nums.size();
        int i, j, res;      
        for(i=0; i<size-1; i++){
            for(j=i+1; j<size; j++){
                if(nums[i] == nums[j]){
                    res = nums[i];
                    break;
                }
            }
        }
    cout<<res;
}

int main()
{
    int size;
    vector<int> arr;
    cin >> size;
    int ele;
    for(int i=0; i<size; i++){
        cin>>ele;
        arr.push_back(ele);
    }
    findDuplicate(arr);
    return 0;
}