#include<stdint.h>

struct data
{
    char *name;
    int height;
    float eye;
};

int main()
{
    int heightAve;
    struct data class1[] =
    {
        {"AKANE Kouichi", 170, 2.0},
        {"TOKUTOMI Shyuji", 173, 1.5},
        {"NISHIDA Taro", 170, 0.5},
        {"TSUJINO Jiro", 175, 0.4},
        {"MATSUO Keiji", 167, 0.6},
        {"OHYAMA Kazuhiro", 168, 0.2},
        {"KITAYAMA Takuya", 179, 0.6},
        {"TANAKA Rina", 158, 0.9}
    };
    for (int i = 0; i < 8; i++)
    {
        heightAve += class1[i].height;
    }

    printf("平均身長：%d\n", heightAve / 8);

    return 0;
}
