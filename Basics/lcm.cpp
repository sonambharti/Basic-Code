#include <iostream>

using namespace std;

int main()
{
    int i,j,max;
    cout<<"Enter the value of number please :";
    cin>>i>>j;
    max=(i>j)?i:j;
    while(1)//Always True
    {

        if(max%i==0 && max%j==0)
        {
            cout<<"LCM of the given number is :"<<max;
            break;
        }
        ++max;
    }
    return 0;

}
