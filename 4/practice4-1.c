#include<stdio.h>

int main()
{
    char c;
    int *p;

    c = 'A';
    p = &c;
    printf("%c\n", *p);

    return 0;
}