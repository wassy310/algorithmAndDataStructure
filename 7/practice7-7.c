#include<stdio.h>

typedef struct{
    int x;
    long y;
    double z;
}XYZ;


void setXYZ(XYZ *p, int x, long y, double z){
    p -> x = x;
    p -> y = y;
    p -> z = z;
}

int main(void){
    XYZ sa;

    setXYZ(&sa, 50, 99999999, 3.14);

    printf("x = %d\n", sa.x);
    printf("y = %ld\n", sa.y);
    printf("z = %lf\n", sa.z);
}