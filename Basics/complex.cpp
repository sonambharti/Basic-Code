#include<iostream>
using namespace std;
class complex
{
    public:
    int real;
    int imaginary;

};
int main()
{
    complex C1, C2, C3;
    cout<<"Enter first complex no.";
    cin>>C1.real>>C1.imaginary;
    cout<<"First complex number is : "<<C1.real<<"+"<<C1.imaginary<<"i"<<endl; 
    cout<<"Enter second complex no.";
    cin>>C2.real>>C2.imaginary;
    cout<<"Second complex number is : "<<C2.real<<"+"<<C2.imaginary<<"i"<<endl;
    cout<<"Sum of given complex no. is : "<<C1.real+C2.real<<"+"<<C1.imaginary+C2.imaginary<<"i"<<endl;
    return 1;
}