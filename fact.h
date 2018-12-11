int fact(int num)
{
    int p;
    if(num==0)
    return 1;
    else
    p=num*fact(num-1);
    return p;
}