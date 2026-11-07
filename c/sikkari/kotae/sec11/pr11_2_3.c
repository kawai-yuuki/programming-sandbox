#include <stdio.h>
#define ARRAY_SIZE 10
int main(void)
{
    int array[ARRAY_SIZE] = {12, 45, 7, 25, 78, 34, 56, 89, 3, 18};
    int *p = array; // 配列の先頭要素のアドレスをポインタpに代入

    int sum = 0;    // 合計値
    int max = *p;   // 最大値の初期値を配列の先頭要素に設定
    int min = *p;   // 最小値の初期値を配列の先頭要素に設定

    // 配列の全要素を走査
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += *(p + i); // ポインタを使って合計値を計算

        if (*(p + i) > max) {
            max = *(p + i); // 最大値を更新
        }
        if (*(p + i) < min) {
            min = *(p + i); // 最小値を更新
        }
    }

    double avg = (double)sum / ARRAY_SIZE; // 平均値を計算

    // 結果を表示
    printf("合計値: %d\n", sum);
    printf("平均値: %.2f\n", avg);
    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);

    return 0;
}
