#include <bits/stdc++.h>
using namespace std;

int e_bits = 8;
int m_bits = 23;
int s_bits = 1;
int t_bits = 32;

#define exponent(x) ((x << 1) >> (1 + m_bits))
#define mantissa(x) ((x << (1 + e_bits)) >> (1 + e_bits))
#define sign(x) (x >> (e_bits + m_bits))



int inf_nan(unsigned int x)
{
    if(!(exponent(x)^((1 << e_bits) - 1)) && mantissa(x))
    {
        return 1;
    }
    else if(!(exponent(x)^((1 << e_bits) - 1)))
    {
        if(sign(x))
            return 2;
        else
            return 3;
    }
    return 0;
}

float calculate_frac(unsigned int x)
{
    if(inf_nan(x))
        return 0;

    float frac=0, M = 0;
    unsigned int my = mantissa(x);

    for(int i=m_bits-1; i>=0; i--)
    {
        unsigned int k = my >> i;
        if(k & 1)
        {
            unsigned int p = 1<<(m_bits-i);
            frac += 1/(float)p;
        } 
    }
    M = frac;

    if(exponent(x) != 0)
        M = 1 + frac;

    printf("frac = %f , M = %f\n",frac, M);

    return M;
}

string convert(unsigned int num)
{
    string bin;
    for (int i = t_bits-1; i >= 0; i--)
    {
        unsigned int k = num >> i;
        if(k == 0)
            bin.push_back('0');
        else if (k & 1)
            bin.push_back('1');
        else
            bin.push_back('0');            
    }
    return bin;
}

unsigned int calculate_exp(unsigned int x)
{
    if(inf_nan(x))
        return 0;

    unsigned int E;

    unsigned int ex = exponent(x);
    if(ex == 0)
        E = 1-((1 << (e_bits-1)) - 1);
    else
        E = ex-((1 << (e_bits-1)) - 1);

    return E;

}

float display(unsigned int y)
{
    float res;
    e_bits = 8;
    m_bits = 23;
    t_bits = 32;
    int nanInf = inf_nan(y);

    if(nanInf == 1)
        printf("NaN: Not a Number\n");
    else if(nanInf == 2)
        printf("- Inf\n");
    else if(nanInf == 3)
        printf("+ Inf\n");
    else
    {
        printf("Hexadecimal : %X\n", y);
        printf("Binary : \n",convert(y));
        float M = calculate_frac(y);
        int E = calculate_exp(y);
        int S = (sign(y))?-1:1;
        res = M*pow(2, E)*S;

        printf("Decimal : %f ",res);

    }
    return res;
}

unsigned int display(unsigned int x, unsigned int y)
{
    e_bits = 8;
    m_bits = 23;
    t_bits = 32;

    unsigned int res_man, res_exp, res_sign;

    unsigned int sign_diff = sign(x) ^ sign(y);
    unsigned int mx = mantissa(x), my = mantissa(y), ex = exponent(x), ey = exponent(y);

    if (!(ex ^ ((1 << e_bits) - 1)) && mx)
        return x;
    if (!(ey ^ ((1 << e_bits) - 1)) && my)
        return y;
    if (!(ex ^ ((1 << e_bits) - 1)) && !(ey ^ ((1 << e_bits) - 1)))
    {
        if (sign_diff)
            return ((((1 << e_bits) - 1) << m_bits) + 1);
        else
            return x;
    }
    else if (!(ex ^ ((1 << e_bits) - 1)))
        return x;
    else if (!(ey ^ ((1 << e_bits) - 1)))
        return y;


    unsigned int exp_diff = abs((int)ex - (int)ey);


    bool bigger;
    if(ex > ey)
        bigger = true;
    else if(ex < ey) 
        bigger = false;
    else if (mx > my)
        bigger = true;
    else
        bigger = false;

    if(!bigger)
    {
        unsigned int temp, tempm, tempe;
        temp = x, x = y, y = temp;
        tempe = ex, ex = ey, ey = tempe;
        tempm = mx, mx = my, my = tempm;
    }

    res_exp = ex;
    res_sign = sign(x);
    if(ex != 0)        
        mx = (1<<m_bits) | mx;
    if(ey != 0)
        my = (1<<m_bits) | my;

    my = my>>exp_diff;

    if(sign_diff)
    {
        res_man = mx - my;
        int i=0;
        while(!(res_man>>m_bits))
        {
            res_man = res_man<<1;
            res_exp = res_exp-1;
            i++;
            if(res_exp == 0)
                return 0;
            if(i>=m_bits)
                return 0;
        }
    }
    else
    {
        res_man = mx + my;
        if(res_man >> (m_bits+1))
        {
            res_exp = res_exp+1;
            if(res_exp >= (1<<e_bits)-1)
            {
                return ((res_sign<<(t_bits-1)) | ((((1 << e_bits) - 1) << m_bits) + 1)-1);
            }
            res_man = res_man>>1;
        }

    }
    res_man = res_man & ((1<<m_bits) - 1);


    unsigned int result = res_sign << (m_bits + e_bits) | res_exp << m_bits | res_man;
    return result;
}


unsigned int multiply(unsigned int x)
{
    //int e=8, m=23, t=32;
    e_bits = 8;
    m_bits = 23;
    t_bits = 32;

    unsigned int mx = mantissa(x), ex = exponent(x);

    if (!(ex ^ ((1 << e_bits) - 1)))
        return x;

    if(ex + 3 >= 255)
        return ((sign(x)<<(t_bits-1)) | ((((1 << e_bits) - 1) << m_bits) + 1)-1);

    unsigned int r1 = sign(x) << (m_bits + e_bits) | (ex+3) << m_bits | mx;
    unsigned int r2 = sign(x) << (m_bits + e_bits) | (ex+1) << m_bits | mx;

    unsigned int result = display(r1, r2);
    return result;
}

int main()
{
    unsigned int x, y;
    printf("Enter floating point numbers in Hexadecimal : \n");
    scanf("%x", &x);
    unsigned int product = multiply(x);

    printf("multiplication : \n");
    display(product);
    return 0;
}

