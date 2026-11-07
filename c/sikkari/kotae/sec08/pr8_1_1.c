#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください＞ ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("奇数です。\n");
    }

    return 0;
}