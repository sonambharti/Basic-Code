#include <iostream>

using namespace std;

int main()
{
      int i,j,rows;
    cout<<"Enter number of rows :";
    cin>>rows;
    for(i=1;i<rows;i++)
    {
        for(j=rows;j>i;j--)
        {
            cout<<"*";
        }
    cout<<endl;
    }
  return 0;
}
