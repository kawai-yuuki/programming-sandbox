#include <stdio.h>

int main(void)
{
    int array[] = {12, 45, 7, 25, 78, 34, 56, 89, 3, -1};   // 配列の最後にストッパーを設定
    int *p = array; // 配列の先頭要素のアドレスをポインタpに代入

    int sum = 0;        // 合計値
    int count = 0;      // 有効なデータの個数をカウント
    int max = *p;       // 最大値の初期値を配列の先頭要素に設定
    int min = *p;       // 最小値の初期値を配列の先頭要素に設定

    // 配列のストッパー(-1)に到達するまでループ
    while (*p != -1) {
        sum += *p; // ポインタを使って合計値を計算

        if (*p > max) {
            max = *p; // 最大値を更新
        }
        if (*p < min) {
            min = *p; // 最小値を更新
        }
        count++; // 有効なデータ数をカウント
        p++;     // ポインタを更新して次の要素を指す
    }

    double avg = (double)sum / count; // 平均値を計算

    // 結果を表示
    printf("合計値: %d\n", sum);
    printf("平均値: %.2f\n", avg);
    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);

    return 0;
}
