#include<stdio.h>

int main()
{
    int sato = 178;
    int sanaka = 175;
    int hiraki = 165;
    int masaki = 179;
    int *isako, *hiroko;

    isako = &sato;
    hiroko = &masaki;

    printf("isakoの指している人の身長: %d\n", *isako);
    printf("hirokoの指している人の身長: %d\n", *hiroko);
    
    isako = &sanaka;
    *hiroko = 180;

    putchar('\n');

    printf("sato君の身長: %d\n", sato);
    printf("sanaka君の身長: %d\n", sanaka);
    printf("hiraki君の身長: %d\n", hiraki);
    printf("masakiの身長: %d\n", masaki);
    printf("isakoさんの指している人の身長: %d\n", *isako);
    printf("hirokoさんの指している人の身長: %d\n", *hiroko);

    return 0;
}