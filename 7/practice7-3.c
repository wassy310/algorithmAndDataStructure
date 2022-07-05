#include<stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};

void set_xyz(struct xyz *p, int x, long y, double z)
{
    p -> x = x;
    p -> y = y;
    p -> z = z;
}

int main(void){
    struct xyz sa;
    set_xyz(&sa, 50, 99999999, 3.14);
    printf("x = %d\n", sa.x);
    printf("y = %ld\n", sa.y);
    printf("z = %f\n", sa.z);

    return 0;
}