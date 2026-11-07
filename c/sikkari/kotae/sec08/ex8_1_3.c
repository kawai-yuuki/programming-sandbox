// if文を使って入力値が0以上かつ100以下かどうか判定するプログラム
#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください＞ ");
    scanf("%d", &n);

    if (n >= 0 && n <= 100) {
        printf("0～100の値を入力しました。\n");
    }

    return 0;
}
