// 正の整数値を5回繰り返し合計するプログラム
#include <stdio.h>

int main(void)
{
    int sum = 0, n;
    int i = 1;
    while (i <= 5) {
        printf("正の整数値を入力してください＞ ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("入力エラー：正の整数値を入力してください。\n");
            continue;
        }
        sum += n;
        i++;
    }
    printf("合計値 = %d", sum);

    return 0;
}