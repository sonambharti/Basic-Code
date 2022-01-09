#include <bits/stdc++.h>
using namespace std;

#define nan (0xF0 + 1)
#define inf (0xF0)



string convert(unsigned int num)
{
    string binary;
    for (int i = 8; i >= 0; i--)
    {
        unsigned int k = num >> i;
        if(k == 0)
            binary.push_back('0');
        else if (k & 1)
            binary.push_back('1');
        else
            binary.push_back('0');            
    }
    return binary;
}


unsigned int add(unsigned int sx, unsigned int ex, unsigned int mx, unsigned int sy, unsigned int ey, unsigned int my)
{

    unsigned int res_man, res_exp, res_sign;

    int sign_diff = sx ^ sy;

    if (!(ex ^ 0xF) && mx)
        return nan;
    if (!(ey ^ 0xF) && my)
        return nan;
    if (!(ex ^ 0xF) && !(ey ^ 0xF))
    {
        if (sign_diff)
            return nan;
        else
            return ((sx<<8) | inf);
    }
    else if (!(ex ^ 0xF))
        return ((sx<<8) | inf);
    else if (!(ey ^ 0xF))
        return ((sy<<8) | inf);


    unsigned int exp_diff = abs((int)ex - (int)ey);


    bool larger;
    if(ex > ey)
        larger = true;
    else if(ex < ey) 
        larger = false;
    else if (mx > my)
        larger = true;
    else
        larger = false;

    if(!larger)
    {
        unsigned int tempm, tempex;
        tempex = ex, ex = ey, ey = tempex;
        tempm = mx, mx = my, my = tempm;
    }

    res_exp = ex;
    res_sign = sx;

    if(ex != 0)        
        mx = (1<<4) | mx;
    if(ey != 0)
        my = (1<<4) | my;

    bool g=0, r=0, s=0;
    while(exp_diff != 0)
    {
        s = s | r;
        r = g;
        g = my & 1;
        my = my>>1;
        exp_diff--;
    }

    if(sign_diff)
    {
        res_man = mx - my;
        int i=0;
        while(!(res_man>>4))
        {
            res_man = res_man<<1;
            res_exp = res_exp-1;
            i++;
            if(res_exp == 0)
                return 0;
            if(i>=4)
                return 0;
        }
    }
    else
    {
        res_man = mx + my;
        if(res_man >> (5))
        {
            res_exp = res_exp+1;
            if(res_exp >= 0xF)
            {
                return ((res_sign<<8) | nan-1);
            }
            res_man = res_man>>1;
        }

    }

    unsigned int res_man_zero = res_man;
    unsigned int res_exp_zero = res_exp;

    if(g)
    {
        if(!(s|r))
        {
            if(res_man & 1)
                res_man = res_man + 1;
        }
        else
            res_man = res_man + 1;
    }

    if(res_man >> 5)
    {
        res_exp = res_exp+1;
        if(res_exp >= 0xF)
        {
            return ((res_sign<<8) | nan-1);
        }
        res_man = res_man>>1;
    }    

    res_man = res_man & 0xF;
    res_man_zero = res_man_zero & 0xF;

    unsigned int round2even = res_sign << 8 | res_exp << 4 | res_man;
    unsigned int round2zero = res_sign << 8 | res_exp_zero << 4 | res_man_zero;
    
    printf("********************sum(Rounded to Zero)***********************\n");
    cout<<(round2zero>>8)<<" "<<hex<<((round2zero>>4) & 0xF)<<" "<<(round2zero & 0xF)<<dec<<endl;
    cout<<convert(round2zero)<<endl;

    return round2even;
}

int main()
{
    unsigned int ex, ey, mx, my, sx, sy;
    
    srand((unsigned)time(0)); 
    sy = (rand()%2);
    sx = (rand()%2);

    printf("Enter 4 bit Exp and 4 bit Frac of 1st number in Hexadecimal : \n");
    scanf("%x%x", &ex, &mx);
    printf("Enter 4 bit Exp and 4 bit Frac of 2nd number in Hexadecimal : \n");
    scanf("%x%x", &ey, &my);

    printf("\n");

    cout<<uppercase;
    cout<<"*****************Number 1********************\n";
    cout<<sx<<" "<<hex<<ex<<" "<<mx<<dec<<endl;
    cout<<"*****************Number 2********************\n";
    cout<<sy<<" "<<hex<<ey<<" "<<my<<dec<<endl;

    unsigned int sum = add(sx, ex, mx, sy, ey, my);
    
    cout<<"****************Default Sum*****************\n";
    cout<<(sum>>8)<<" "<<hex<<((sum>>4) & 0xF)<<" "<<(sum & 0xF)<<dec<<endl;
    cout<<convert(sum)<<endl;

    return 0;
}
