#include<stdio.h>

int main(void)
{
    int n1, n2, tmp;
    int *np1 = &n1, *np2 = &n2;

    puts("2つの整数を入力してください");
    printf("整数A:");
    scanf("%d", &n1);
    printf("整数B:");
    scanf("%d, &n2");

    tmp = *np1;
    *np1 = *np2;
    *np2 = tmp;
    
    puts("これらの値を交換しました");
    printf("整数Aは%dです\n", n1);
    printf("整数Bは%dです\n", n2);

    return 0;
}