#include<stdio.h>

int main()
{
    char c = 'A';
    char *p;
    p = &c;

    printf("%c\n", *p);
    *p += 2;
    printf("%c\n", *p);
    
    return 0;
}