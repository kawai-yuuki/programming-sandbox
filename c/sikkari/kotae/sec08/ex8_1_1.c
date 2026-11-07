// if文を使って入力値がゼロかどうか判定するプログラム
#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください＞ ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0を入力しました。\n");
    }

    return 0;
}
