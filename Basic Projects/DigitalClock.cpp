#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<stdlib.h>
int main()
{
    int h, m, s;
    int d = 1000; //adding delay of 1000 milisec or 1 sec and will use in function sleep
    printf("Set Time: \n");
    scanf("%d %d %d", &h, &m, &s);
    system("cls");
    if(h>24 || m>60 || s>60)
    {
        printf("ERROR ! \n");
        exit (0);
    }
    else
    {
        
        while(TRUE)
        {
            s++;
            if(s>59)
            {
                m++; 
                s=0;
            }
            
            if(m>59)
            {
                h++;
                m=0;
            }
            
            if(h==24)
            {
                h=1;
            }
            printf("\n Clock: ");
            printf("\n %02d:%02d:%02d", h, m, s); 
            Sleep(d);
            system("cls");


        }
    }
    return 0;
    

}