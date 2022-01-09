#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int e = 9;
int n = 32;

int get_exponent(unsigned int A[], int e){
    int expo = 0;
    int f=0, i;
    for(i=e-1; i>0; i--){
        expo += A[i] * (pow(2, f));
        f++;
    }
    return expo;
}


double get_fraction(unsigned int A[], int e, int n){
    double frac = 0;
    int i, f = -1;
    for(i=e; i<n; i++){
        frac += A[i] * (pow(2, f));
        f--;
    }
    return frac;
}

void getVal(unsigned int A[], int e, int n, int b){
    
    int bias = pow(2, e-2) - 1;
    int E;
    if(b == 1){
        int expo = get_exponent(A, e);
        E = expo - bias;
        printf("Normalized: \n");
    }
    else{
        E = 1 - bias;
        printf("Denormalized: \n");
    }
    
    double frac = get_fraction(A, e, n);
        
    double mantisa;
    if(b == 1){
        mantisa = 1 + frac;
    }
    double ans = mantisa * pow(2, E);
    if(A[0] == 1){
        double temp;
        temp = 2*ans;
        ans = ans - temp;
        printf("Mantisa: %f \nFraction: %f \nValue: %f \n ", mantisa, frac, ans);
    }
    else{
        printf("Mantisa: %f \nFraction: %f \nValue: %f \n ", mantisa, frac, ans);
    }
       
}

void display(unsigned int A[]){
        
        int i;
        bool check_e1 = 1, check_m0 = 1, check_e0=1;
        for(i=1; i<e; i++){
            if(A[i] == 0){
                check_e1 = 0;
            }
            if(A[i] == 1){
                check_e0 = 0;
            }
        }
       
        for(i=e; i<n; i++){
            if(A[i] == 1){
                check_m0 = 0;
            }
        }
        if(check_e1 && check_m0){
            if(A[0] == 1){
                printf(" -INF ");
            }
            else{
                printf(" +INF "); 
            }
        }
        if(check_e1 && !check_m0){
            printf(" NaN ");
        }
        
        if(!check_e1 && !check_e0){
            getVal(A, e, n, 1);
        }
        
        if(check_e0){
            if(check_m0){
                printf("Answer is 0.");
            }
            else{
                getVal(A, e, n, 0);
            }
            
        }    
}



int main()
{
    int i, diff;
    unsigned int res[32];
    unsigned int num1[32] = {0,
                        1, 0, 0, 0, 0, 0, 1, 0,
                        0, 0, 1, 1, 1, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 0};

    unsigned int num2[32] = {0,
                        0, 1, 1, 1, 1, 1, 1, 0,
                        0, 0, 1, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 0};
    
    
    
    
    for(i=0; i<n; i++){
        res[i]=0;
    }printf("\n");
    
    
   /* printf("Enter maximum valued 32 bit floating number: \n");
    for(i=0; i<n; i++){
        scanf("%d",&num1[i]);
    }
    printf("Enter smaller valued 32 bit floating number: \n");
    for(i=0; i<n; i++){
        scanf("%d",&num2[i]);
    }*/
    
    int E1 = get_exponent(num1,e);
    int E2 = get_exponent(num2,e);
    
    if(E1 > E2){
        diff = E1 - E2;
        int temp = diff;
        i=e;
        
        while(--temp){
            res[i]=0;
            i++;
        }
        res[i]=1;
        for(i=i+1; i<n; i++){
            res[i]=num2[i-diff];
        }
        
        int c=0;
        bool check=0;
        for(i=n-1; i>=e; i--){
            
            num2[i] = num1[i] + res[i] + c;
            if(num2[i] == 2){
                c = 1;
                num2[i] = 0;
                if(i == e){
                    check =1;
                }
            }
            else if(num2[i] == 3){
                c = 1;
                num2[i] = 1;
                if(i == e){
                    check =1;
                }
            }
            else{
                c=0;
            }
        }
        if(check){
            res[e] = 0;
            for(i=e+1; i<n; i++){
                res[i]=num2[i-1];
            }
            c=0;
            num1[e-1]++;
            for(i=e-1; i>0; i--){
                
                num1[i] += c;
                if(num1[i] == 2){
                    c = 1;
                    num1[i] = 0;
                }
                else if(num1[i] == 3){
                    c = 1;
                    num1[i] = 1;
                }
                else{
                    c=0;
                }
            }
            for(i=0; i<e; i++){
                res[i] = num1[i];
            }
        
            display(res);
        }
        else{
            for(i=0; i<e; i++){
                num2[i] = num1[i];
            }
            e++;
            display(num2);
        }
    }
    
    else if(E2 > E1){
        diff = E2 - E1;
        int temp = diff;
        i=e;
        temp --;
        
        while(temp--){
            res[i]=0;
            i++;
        }
        res[i]=1;
        for(i=i+1; i<n; i++){
            res[i]=num1[i-diff];
        }
        
        int c=0;
        bool check =0;
        for(i=n-1; i>=e; i--){
            
            num1[i] = num2[i] + res[i] + c;
            if(num1[i] == 2){
                c = 1;
                num1[i] = 0;
                if(i == e){
                    check =1;
                }
            }
            else if(num1[i] == 3){
                c = 1;
                num1[i] = 1;
                if(i == e){
                    check =1;
                }
            }
            else{
                c=0;
            }
        }
        
        if(check){
            res[e] = 0;
            for(i=e+1; i<n; i++){
                res[i]=num1[i-1];
            }
            c=0;
            num2[e-1]++;
            for(i=e-1; i>0; i--){
                
                num2[i] += c;
                if(num2[i] == 2){
                    c = 1;
                    num2[i] = 0;
                }
                else if(num2[i] == 3){
                    c = 1;
                    num2[i] = 1;
                }
                else{
                    c=0;
                }
            }
            for(i=0; i<e; i++){
                res[i] = num2[i];
            }
            e++;
            display(res);
        }
        else{
            for(i=0; i<e; i++){
                num1[i] = num2[i];
            }
            e++;
            display(num1);
        }
        
    }    
    
    
    else{
        int c=0;
        bool check =0;
        for(i=n-1; i>=e; i--){
            
            res[i] = num1[i] + num2[i] + c;
            if(res[i] == 2){
                c = 1;
                res[i] = 0;
                if(i == e){
                    check =1;
                }
            }
            else if(res[i] == 3){
                c = 1;
                res[i] = 1;
                if(i == e){
                    check =1;
                }
            }
            else{
                c=0;
            }
        }
        if(check){
            num2[e] = 1;
            for(i=e+1; i<n; i++){
                num2[i]=res[i-1];
            }
        }
        else{
            num2[e] = 0;
            for(i=e+1; i<n; i++){
                num2[i]=res[i-1];
            }
        }
        c=0;
        num2[e-1]++;
        for(i=e-1; i>0; i--){
            
            num2[i] += c;
            if(num2[i] == 2){
                c = 1;
                num2[i] = 0;
            }
            else if(num2[i] == 3){
                c = 1;
                num2[i] = 1;
            }
            else{
                c=0;
            }
        }
        e++;
        display(num2);
    }
    return 0;
}



