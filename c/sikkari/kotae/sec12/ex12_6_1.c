// 繰り返し整数値を入出力するプログラム
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char s[100];

    do {
        printf("整数値を入力（終了条件：負の値）＞ ");
        scanf("%99s", s);
        n = atoi(s);
        printf("入力値：%d\n", n);
    } while (n >= 0);

    return 0;
}