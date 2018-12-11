int binary(int num)
{

int rem,binary=0,a=1;
    while(num>0)
    {
        rem=num%2;
        binary=binary+rem*a;
        a=a*10;
        num=num/2;
       
    }
     return binary;
}