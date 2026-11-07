#include <stdio.h>

int main(void)
{
    int dividend, divisor; // 割られる数と割る数
    int count = 0;         // 成功した計算回数

    while (count < 3) { // 計算成功回数が3回に達するまで繰り返す
        printf("整数値を2つ入力してください＞ ");
        scanf("%d%d", &dividend, &divisor);

        if (divisor == 0) { // 割る数が0の場合はエラー表示
            printf("エラー：0で割ることはできません。\n");
            continue; // 次の入力へ
        }

        // 割り算の結果を表示
        printf("商：%d 余り：%d\n", dividend / divisor, dividend % divisor);
        count++; // 成功した計算回数を増やす
    }

    return 0;
}
