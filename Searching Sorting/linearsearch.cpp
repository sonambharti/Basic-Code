    #include<iostream>
    using namespace std;
    int main()//Linear search
    {
        int i, n, num, pos=0;
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
        for(i=0;i<n;i++)
        {
            if(arr[i]==num)
            {
                pos=1;
                break;
            }
        }
        if(pos==1)
            {
                cout<<num<<" is at "<<i+1<<" position."<<endl;
            }
        else
            {
                cout<<"no. not found!!!"<<endl;
            }
    }
