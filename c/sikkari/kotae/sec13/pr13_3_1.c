#include <stdio.h>

int sum_array(const int arr[], int size);

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5}; // 配列を定義
    int size = (int)(sizeof(numbers) / sizeof(numbers[0])); // 配列の要素数を計算

    int total = sum_array(numbers, size); // 関数を呼び出して合計を計算
    printf("配列の合計: %d\n", total); // 合計を出力

    return 0;
}

// 配列要素の合計を返す関数
int sum_array(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // 各要素を加算
    }
    return sum;
}
