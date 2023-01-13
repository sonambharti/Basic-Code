#include <bits/stdc++.h>

using namespace std;

void swap(char *str1, char *str2){
    char *temp = (char *)malloc((strlen(str1)+1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

int main()
{
    int n;
    cin>>n;
    char el;
    char str1[n];
    char str2[n];
    for(int i=0; i<n; i++){
        cin>>el;
        str1[i] = el;
    }
    for(int i=0; i<n; i++){
        cin>>el;
        str2[i] = el;
    }
    swap(str1, str2);
    cout<<str1<<" "<<str2;

    return 0;
}
