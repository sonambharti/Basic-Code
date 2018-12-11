#include"arithmatic.h"
#include"fact.h"
#include"bin.h"
#include<iostream>
#include<cmath>
#include<cctype>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    int run;
    float a, b, t, k;
    char w;
    float result;
    cout<<"1.Arithmatic\n";
    cout<<"2.Addition of complex no.\n";
    cout<<"3.Trigonometric function\n";
    cout<<"4.Logrithmic function\n";
    cout<<"5.Power function\n";
    cout<<"6.Square root function\n";
    cout<<"7.Root of any no\n";
    cout<<"8.factorial function\n";
    cout<<"9.Temperature conversion\n";
    cout<<"10.Rupee conversion\n";
    cout<<"11.Decimal-Binary\n";
    cout<<"12.Binary-Decimal\n";
    cout<<"13.Permutation\n";
    cout<<"14.Combination\n";
    cout<<"Enter no. of times you want output : ";
    cin>>run;
    for(int k=1;k<=run;k++)
 {
    cout<<"Which function do you want to calculate : ";
    cin>>t;
    if(t==1)
    {
        cin>>a;
        cin>>w;
        cin>>b;
        result=arith(a,b,w);
        cout<<result<<endl;
    }
    if(t==2)
    {
        int a1,b1, a2,b2;
        cin>>a1>>b1;
        cout<<a1<<"+"<<b1<<"i"<<endl;
        cin>>a2>>b2;
        cout<<a2<<"+"<<b2<<"i"<<endl;
        cout<<a1+a2<<"+"<<b1+b2<<"i"<<endl;
    }
    if(t==3)
    {
        int f;
        float a1;
        cout<<"1>: Sin function"<<endl;
        cout<<"2>: Cos function"<<endl;
        cout<<"3>: Tan function"<<endl;
        cout<<"Enter the value of f as which function you want to run: "<<endl;
        cin>>f;
                            if(f==1)
                            {
                                cout<<"Enter a no. :";
                                cin>>a1;
                                float result1=(sin(a1));
                                cout<<result1<<endl;
                            }
                            if(f==2)
                            {
                                cout<<"Enter a no. :";
                                cin>>a1;
                                float result1=(cos(a1));
                                cout<<result1<<endl;
                            }
                            if(f==3)
                            {
                                cout<<"Enter a no. :";
                                cin>>a1;
                                float result1=(tan(a1));
                                cout<<result1<<endl;
                            }
    }
    if(t==4)
    {
        int d, num;
        cout<<"1> Natural Log"<<endl;
        cout<<"2>Log with base 10"<<endl;
        cout<<"Enter the value of d as which function you want to run: ";
        cin>>d;
     if(d==1)
         {
             int num;
             cout<<"Enter any no.: ";
             cin>>num;
             float result1=log(num);
             cout<<result1<<endl;


         }
        if(d==2)
         {
             int num;
             cout<<"Enter any number: ";
             cin>>num;
             float result1=log10(num);
             cout<<result1<<endl;
         }
    }

    if(t==5)
    {
        int base, power;
        cout<<"Enter value of base : ";
        cin>>base;
        cout<<"Enter value of power : ";
        cin>>power;
        float result=pow(base,power);
        cout<<result<<endl;
    }
    if(t==6)
    {
        int number;
        cout<<"Enter value of number :";
        cin>>number;
        float result=sqrt(number);
        cout<<result<<endl;
    }
     if(t==7)
    {
        int x,y;
        cout<<"Enter the number: ";
        cin>>x;
        cout<<"Enter value of power: ";
        cin>>y;
        float result=pow(x,1/y);
        cout<<result<<endl;
    }
    if(t==8)
    {
        int num;
        cin>>num;
        int result7=fact(num);
        cout<<result7<<endl;

    }
    if(t==9)
    {
        float F;
        float C;
        int Q;
        cout<<"Type 0 if you want to calc F : ";
        cin>>Q;
         if(Q==0)
    {
        cout<<"Enter the value of C : ";
        cin>>C;
        F=((9/5)*C)+32;
        cout<<F<<" "<<"f"<<endl;
    }
    else
    {
        cout<<"Enter the value of F : ";
        cin>>F;
        C=(F-32)*5/9;
        cout<<C<<" "<<"c"<<endl;
    }

    }

    if(t==10)
    {
        float R;
        float P;
        int Q;
        cout<<"Type 0 if you want to calc R : ";
        cin>>Q;
         if(Q==0)
    {
        cout<<"Enter the value of P : ";
        cin>>P;
        R=P/100;
        cout<<R<<" "<<"rupee"<<endl;
    }
    else
    {
        cout<<"Enter the value of R : ";
        cin>>R;
        P=R*100;
        cout<<P<<" "<<"paise"<<endl;
    }

    }
    if(t==11)
    {
        int num;
        cout<<"Enter the no. to change binary: ";
        cin>>num;
        result=binary(num);
        cout<<result<<endl;
    }
    if(t==12)
    {

	int d=0,temp,inc=0,i,c;
	temp=c;
    cout<<"Enter any Binary number: ";
    cin>>temp;
	while(temp!=0)
	{

		i=temp%10;
		d=d+(i*pow(2,inc));
		temp=temp/10;
		inc++;
	}
    cout<<d<<endl;

    }
    if(t==13)
    {
	int n,r;
	float nPr;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<"Enter value of r: ";
	cin>>r;
	if(n>=r&&n>=0&&r>=0)
	{
		nPr=fact(n)/fact(n-r);
		cout<<nPr<<endl;
    }
    else

        cout<<"invalid entry"<<endl;

    }
    if(t==14)
    {

	int n,r;
	float nCr;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<"Enter the value of r: ";
	cin>>r;
	if(n>=r&&n>=0&&r>=0)
	{
		nCr=fact(n)/(fact(r)*fact(n-r));
		cout<<nCr<<endl;
	}
	else
	cout<<"invalid choice"<<endl;



    }



 }
	return 0;

}
