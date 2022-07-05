int main()
{
    char str[] = "Computer";
    char *p;
    p = str;

    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    return 0;
}