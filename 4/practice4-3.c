#include<stdio.h>

int main()
{
    int a = 611, *ptr;

    ptr = &a;
    printf("変数aのアドレス = %p\n", &a);
    printf("変数aの値 = %d\n", a);
    printf("ポインタptrのアドレス = %p\n", ptr);
    printf("ポインタptrの指す値 = %d\n", *ptr);
    
    return 0;
}