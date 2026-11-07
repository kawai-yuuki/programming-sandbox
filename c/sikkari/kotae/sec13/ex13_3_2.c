// 関数に配列を渡す例（ポインタで受け取る）
#include <stdio.h>

void print_array(const int *arr, int size);

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = (int)(sizeof(numbers) / sizeof(numbers[0]));

    print_array(numbers, size); // 配列の先頭要素のアドレスとサイズを渡す

    return 0;
}

void print_array(const int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(arr + i)); // ポインタで配列の各要素を表示する
    }
    printf("\n");
}
