#include<stdio.h>

void set123(int *vc)
{
    *vc = 1;
    *(vc + 1) = 2;
    *(vc + 2) = 3;
}

int main(void)
{
    int i;
    int ary[5] = {0};

    set123(ary);

    for (i = 0; i < 5; i++)
    {
        printf("ary[%d] = %d\n", i, ary[i]);
    }

    return 0;
}