#include <stdio.h>

int main(void)
{
    int first, second;  // 入力される2つの整数
    int diff_count = 0; // 差を求めた回数

    for (int i = 0; i < 3; i++) { // 3回繰り返し入力を求める
        printf("整数値を2つ入力してください＞ ");
        scanf("%d%d", &first, &second);

        if (second > first) { // 2番目の値が1番目より大きい場合
            printf("後から入力した値が大きいです。\n");
            continue; // 次の繰り返しへ進む
        }

        // 差を計算して表示
        printf("差：%d\n", first - second);
        diff_count++; // 差を求めた回数をカウント
    }

    // 結果を表示
    printf("差を求めた回数：%d\n", diff_count);

    return 0;
}
