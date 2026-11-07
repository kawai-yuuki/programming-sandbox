#include <stdio.h>

void find_min_max(const int arr[], int size, int *min, int *max);

int main(void)
{
    int numbers[] = {23, 15, 42, 8, 16, 4, 30, -3, 84, 58};
    int size = (int)(sizeof(numbers) / sizeof(numbers[0]));
    int min, max;

    // 関数を呼び出して最大値と最小値を求める
    find_min_max(numbers, size, &min, &max);

    // 結果を表示
    printf("配列要素: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("最小値: %d\n", min);
    printf("最大値: %d\n", max);

    return 0;
}

// 配列の最大値と最小値を求める関数
void find_min_max(const int arr[], int size, int *min, int *max)
{
    *min = arr[0]; // 最初の要素を仮の最小値として設定
    *max = arr[0]; // 最初の要素を仮の最大値として設定

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // 新しい最小値を更新
        }
        if (arr[i] > *max) {
            *max = arr[i]; // 新しい最大値を更新
        }
    }
}
