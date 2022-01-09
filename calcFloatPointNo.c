#include <stdio.h>
#include <math.h>

int e = 9;

double get_exponent(unsigned int A[], int e){
    double expo = 0;
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
    double bias = pow(2, e-2) - 1;
    double E;
    if(b == 1){
        double expo = get_exponent(A, e);
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


int main()
{
    int n = 32, i;
    unsigned int arr[32] = {1,
			1, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 1, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0};

    printf("Enter the 32 bit representation of floating point no.(s=1,expo=8,frac=23): \n");
    /*for(unsigned int i=0; i<32; i++){
		scanf("%u ", &arr[i]);
	}*/

    double expo = get_exponent(arr, e);
    double frac = get_fraction(arr, e, n);
    
    printf("\n(a)...\n");

    if(expo == 255 && frac == 0){
        if(arr[0] == 1){
            printf("Special value is -INF.\n");
        }
        else if(arr[0] == 0){
            printf("Special value is +INF.\n");
        }
    }
    else if(expo == 255 && frac != 0){
        printf("Special value is NaN.\n");
    }

    else{
        printf("No special value possible.\n");
    }

    printf("\n*****************************************************\n");

    printf("\n(b)...\n");
    if(expo != 0 && expo != 255){
        getVal(arr, e, n, 1);
    }
    if(expo == 0){
        if(frac == 0){
            printf("Answer is: 0");
        }
        else{
            getVal(arr, e, n, 0);
        }
    }

    printf("\n*****************************************************\n");
    printf("\n(c)...\n");

    printf("Enter the 32 bit representation of floating point no.(s=1,expo=9,frac=22): ");
    e++;

    double expo2 = get_exponent(arr, e);
    double frac2 = get_fraction(arr, e, n);

    if(expo2 != 0 && expo2 != 255){
        getVal(arr, e, n, 1);
    }
    if(expo2 == 0){
        if(frac2 == 0){
            printf("Answer is: 0");
        }
        else{
            getVal(arr, e, n, 0);
        }
    }
    return 0;
    
}
