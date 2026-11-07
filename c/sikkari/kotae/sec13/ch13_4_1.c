#include <stdio.h>

void get_median_mode(const int arr[], int size, double *median, int *mode);

int main(void)
{
    int numbers[] = {1, 3, 3, 6, 7, 8, 9, 9, 9, 10};
    int size = (int)(sizeof(numbers) / sizeof(numbers[0]));
    double median;
    int mode;

    // 関数を呼び出して計算
    get_median_mode(numbers, size, &median, &mode);

    // 結果を表示
    printf("配列要素: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("メジアン: %.2f\n", median);
    printf("モード: %d\n", mode);

    return 0;
}

// メジアン（中央値）とモード（最頻値）を求める関数
void get_median_mode(const int arr[], int size, double *median, int *mode)
{
    // メジアンを計算
    if (size % 2 == 0) {
        *median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0; // 偶数個の場合
    } else {
        *median = arr[size / 2]; // 奇数個の場合
    }

    // モードを計算
    int max_count = 0;
    int current_count = 1;
    *mode = arr[0]; // 仮のモードを配列の最初の値に設定

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            current_count++; // 同じ値が続いた場合、カウントを増やす
        } else {
            if (current_count > max_count) {
                max_count = current_count; // 最大のカウントを更新
                *mode = arr[i - 1];
            }
            current_count = 1; // カウントをリセット
        }
    }

    // 最後の値のカウントを確認
    if (current_count > max_count) {
        *mode = arr[size - 1];
    }
}
