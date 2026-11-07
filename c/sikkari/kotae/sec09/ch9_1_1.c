#include <stdio.h>

int main(void)
{
    int number;    // 入力された整数値
    int count = 0; // 桁数をカウントする変数

    printf("整数値を入力してください＞ ");
    scanf("%d", &number);

    // 0の場合は1桁とする
    if (number == 0) {
        count = 1;
    }
    else {
        int temp = number; // 桁数を数えるための一時変数
        if (number < 0) {
            temp *= -1; // 負の数は正の数に直す
        }

        // tempが0になるまで繰り返し
        while (temp > 0) {
            temp /= 10; // 10で割って桁を1つ減らす
            count++;    // 桁数をカウント
        }
    }

    // 結果を表示する
    printf("%dは%d桁です。\n", number, count);

    return 0;
}
