#include<iostream>
using namespace std;
int main()//binary search
{
    int i, n, num, middle, first, last;
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter the value of array: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the no. to be searched: ";
        cin>>num;
        first=0;
        last=n-1;
        middle=(first+last)/2;
        while(first<=last)
        {
            if(arr[middle]<num)
            {
                first=middle+1;
            }
            else if(arr[middle]==num)
            {
                cout<<num<<" found at location "<<middle+1<<endl;
                break;
            }
            else
            {
                last=middle-1;
            }
            middle=(first+last)/2;

        if(first>last)
        cout<<"Not found!!! \n\n"<<num<<" is not present in the list.";
        }
}
