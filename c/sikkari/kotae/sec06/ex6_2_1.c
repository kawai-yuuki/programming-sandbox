// 算術演算子を確認するプログラム
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("整数値を2個入力してください。\n");
    printf("整数a ＞ ");
    scanf("%d", &a);
    printf("整数b ＞ ");
    scanf("%d", &b);

    printf("\n[二項演算子]\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\n[単項演算子]\n");
    printf("-a = %d\n", -a);
    printf("+b = %d\n", +b);

    return 0;
}
