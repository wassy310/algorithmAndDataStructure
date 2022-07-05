#include<stdio.h>
#include<limits.h>

int main()
{
    int x, y, z, max;
    x = 1;
    y = 2;
    z = 3;
    max = INT_MIN;

    if(x > max) max = x;
    if(y > max) max = y;
    if(z > max) max = z;
    printf("最大値 = %d", max);

    return 0;

}