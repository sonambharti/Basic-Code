//Count the number of each element in array

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {8, 8, 9, 6, 7,7, 7};
    map<int,int> res;
     
    // Loop to store the frequency of
    // elements of array
    for (int i = 0; i < 7; i++)
    {
        res[arr[i]]++;
    }
    
    for (auto x:res)
    {
        cout<<x.first<<" ----> "<<x.second<<endl;
    }
    

    return 0;
}
