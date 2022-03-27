int fact(int n)
{
    int factorial=1,i;
    for(i=1;i<=n;i++)
        factorial=factorial*i;
        return factorial;
}
int f(int U, int R)
{
    int result;
    int a=fact(U+R);
    int b=fact(U);
    int c=fact(R);
    result=a/(b*c);
    return result;
}