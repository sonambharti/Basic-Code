/*
Syntax to access array using pointers...
*/

#include <iostream>
using namespace std;

int main()
{
    int *p;
    int a[3] = {2, 5, 6};
    //a = {2, 3, 4};
    p = &a[0];
    cout<<"Address of 1st index of array using a: "<<a<<endl;
    cout<<"Address of 1st index of array using p: "<<p<<endl;
    
    cout<<"Address of pointer p using &p: "<<&p<<endl;
    
    cout<<"Value of 1st index of array using a[0]: "<<a[0]<<endl;
    cout<<"Value of 1st index of array using *p: "<<*p<<endl;
    cout<<"Value of 1st index of array using *a: "<<*a<<endl;
    cout<<"Value of 1st index of array using i[a]: "<<1[a]<<endl;
    
    cout<<"Value of 2nd index of array using a[1]: "<<a[1]<<endl;
    cout<<"Value of 2nd index of array using *(p+1): "<<*(p+1)<<endl;
    cout<<"Value of 2nd index of array using *(a+1): "<<*(a+1)<<endl;
    cout<<"Value of 2nd index of array using i[a]: "<<1[a]<<endl;
    
    cout<<"Value of 1st index of array added with 1 using a[0]+1: "<<a[0]+1<<endl;
    cout<<"Value of 1st index of array added with 1 using *p+1: "<<*p+1<<endl;
    
    cout<<"Value of 2nd index of array added with 2 using a[1]+2: "<<a[1]+2<<endl;
    cout<<"Value of 1st index of array added with 2 using *p+2: "<<*p+2<<endl;
    
    return 0;
}
