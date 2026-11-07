// 配列を指すポインタを使って複数の値を返す例
#include <stdio.h>

void double_values(int arr[], int size);

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = (int)(sizeof(numbers) / sizeof(numbers[0]));

    double_values(numbers, size);

    printf("2倍した要素: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// 配列の要素をすべて2倍にする関数
void double_values(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
