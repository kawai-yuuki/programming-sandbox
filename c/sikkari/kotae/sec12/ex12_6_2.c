// 繰り返し浮動小数点値を合計するプログラム
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    double x, sum = 0.0;
    char s[100];

    while (1) {
        printf("数値を入力（終了条件：\"end\" or \"END\"）＞ ");
        scanf("%99s", s);
        if (!strcmp(s, "end") || !strcmp(s, "END"))
            break;
        x = atof(s);
        sum += x;
    }
    printf("合計値は%fです。\n", sum);

    return 0;
}