#include <iostream>

using namespace std;

int main()
{
     int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    cout<<"Enter rows and columns of first matrix :";
    cin>>m>>n;
    cout<<"enter rows and columns of second matrix :";
    cin>>p>>q;
if(n==p)
       {
    cout<<"\nEnter first matrix :";
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            cin>>a[i][j];
        cout<<"\nEnter second matrix :";
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
            cin>>b[i][j];
 cout<<"\nThe new matrix is :";

      for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
   }}
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<n;k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
            cout<<"\n";
        }

       for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {  cout<< c[i][j] << " ";
cout << "\n";
}}}
    else
        cout<<"\nSorry!!!Matrix multiplication can't be done";



}
