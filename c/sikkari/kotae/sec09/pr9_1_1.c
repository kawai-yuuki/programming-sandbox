#include <stdio.h>

int main(void)
{
    int a, b;

    printf("整数値を2つ入力してください＞ ");
    scanf("%d%d", &a, &b);

    while (a == b) {
        printf("同じ値が入力されました。次を入力してください＞ ");
        scanf("%d%d", &a, &b);
    }
    printf("異なる値が入力されました。\n");

    return 0;
}
