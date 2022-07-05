#include<stdio.h>

int main()
{
    struct xyz
    {
        int x;
        long y;
        double z;
    };

    struct xyz sa;
    
    sa.x = 50;
    sa.y = 99999999;
    sa.z = 3.140000;

    printf("x = %d\n", sa.x);
    printf("y = %ld\n", sa.y);
    printf("z = %lf\n", sa.z);

    return 0;
}