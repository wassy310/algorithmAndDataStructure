#include<stdio.h>

int nx;

int main(void)
{
    static double dx;
    static int vc[3];

    printf("nx:%p\n", &nx);
    printf("dx:%p\n", &dx);
    printf("vc[0]:%x\n", &vc[0]);
    printf("vc[1]:%x\n", &vc[1]);
    printf("vc[2]:%x\n", &vc[2]);

    return 0;
}