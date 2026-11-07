// 1次元配列の値とアドレスを表示するプログラム
#include <stdio.h>

int main(void)
{
    int arr[3] = {1, 2, 3};

    printf("arrの先頭要素のアドレス: %p\n", arr);
    printf("arr[0]の値: %d\tアドレス: %p\n", arr[0], &arr[0]);
    printf("arr[1]の値: %d\tアドレス: %p\n", arr[1], &arr[1]);
    printf("arr[2]の値: %d\tアドレス: %p\n", arr[2], &arr[2]);

    return 0;
}