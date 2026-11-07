#include <stdio.h>

int main(void)
{
    int count;

    printf("繰り返し回数を入力してください＞ ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        int sum = 0;
        int n;

        // 正整数が入る限り合計を取り続け、0以下が来たら終了する
        printf("整数値を入力してください(0以下で終了)＞ ");
        scanf("%d", &n);
        while (n > 0) {
            sum += n;
            printf("整数値を入力してください(0以下で終了)＞ ");
            scanf("%d", &n);
        }
        printf("合計値 = %d\n", sum);
    }

    return 0;
}