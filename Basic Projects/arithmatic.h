float arith(float a, float b, char n)
{
    float ans;
    switch(n)
    {
        case'+':
        ans=a+b;
        break;

        case'-':
        ans=a-b;
        break;

        case'*':
        ans=a*b;
        break;

        case'/':
        ans=a/b;
        break;
    }
    return ans;
}