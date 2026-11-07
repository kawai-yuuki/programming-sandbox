// 変数に値を入力するプログラム
#include <stdio.h>

int main(void)
{
    int n;
    double x;
    char c;

    printf("整数値を入力してください。＞ ");
    scanf("%d", &n);
    printf("入力データを10進で出力 :%d\n", n);

    printf("実数値を入力してください。＞ ");
    scanf("%lf", &x);
    printf("入力データを浮動小数点数で出力 :%f\n", x);

    printf("1文字を入力してください。＞ ");
    scanf(" %c", &c);
    printf("入力データを文字で出力 :%c\n", c);

    return 0;
}
