// if～else if～else～を使って2値を比較するプログラム
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("整数値を2個入力してください＞ ");
    scanf("%d%d", &a, &b);

    if (a > b) {
        printf("%dと%dでは%dの方が大きいです。\n", a, b, a);
    }
    else if (a < b) {
        printf("%dと%dでは%dの方が大きいです。\n", a, b, b);
    }
    else {
        printf("%dと%dは等しいです。\n", a, b);
    }

    return 0;
}
