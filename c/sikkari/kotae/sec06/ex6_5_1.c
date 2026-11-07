// 等価演算子と関係演算子の結果を確認するプログラム
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("整数値を2個入力してください。\n");
    printf("整数a ＞ ");
    scanf("%d", &a);
    printf("整数b ＞ ");
    scanf("%d", &b);

    printf("\n[等価演算の結果]\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    
    printf("\n[関係演算の結果]\n");
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    return 0;
}
