#include<stdio.h>

int main()
{
    int i, n;
    i = 1;
    for(n = 1; n <= 100; n++){
        i = i * n;
    }
    printf("ans = %d", i);

    return 0;
}