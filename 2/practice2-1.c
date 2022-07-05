#include<stdio.h>

int main()
{
    int a[] = {4, 6, 2, 8, 9, 7, 1}, n = 7, i, min;

    min = a[0];
    for(i = 0; i < n; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("%d", min);

    return 0;
}