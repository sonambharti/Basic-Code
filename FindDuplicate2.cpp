
#include <bits/stdc++.h>

using namespace std;
//Complexity: O(n)
int findDuplicate(vector<int> nums) {
        int size = nums.size();
        int i, res; 
        //Hashing Technique
        for(i=0; i<size; i++){
            nums[nums[i]%size] = nums[nums[i]%size]+ size;                
        }
        //finding repeating element
        for(i=0; i<size; i++){
            if(nums[i] >= size*2)
                res = i;
        }
        return res;
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
    cout<<findDuplicate(arr);
    return 0;
}