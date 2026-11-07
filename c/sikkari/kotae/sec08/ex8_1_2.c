// if文を使って入力値が負かどうか判定するプログラム
#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください＞ ");
    scanf("%d", &n);

    if (n < 0) {
        printf("負の値を入力しました。\n");
    }

    return 0;
}
