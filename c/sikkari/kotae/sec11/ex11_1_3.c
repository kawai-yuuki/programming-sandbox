// 2次元配列の値とアドレスを表示するプログラム
#include <stdio.h>

int main(void)
{
    int arr2[2][2] = {{1, 2}, {3, 4}};

    printf("arr2の先頭要素のアドレス: %p\n", arr2);
    printf("arr2[0]の先頭要素のアドレス: %p\n", arr2[0]);
    printf("arr2[0][0]の値: %d\tアドレス: %p\n", arr2[0][0], &arr2[0][0]);
    printf("arr2[0][1]の値: %d\tアドレス: %p\n", arr2[0][1], &arr2[0][1]);
    printf("arr2[1]の先頭要素のアドレス: %p\n", arr2[1]);
    printf("arr2[1][0]の値: %d\tアドレス: %p\n", arr2[1][0], &arr2[1][0]);
    printf("arr2[1][1]の値: %d\tアドレス: %p\n", arr2[1][1], &arr2[1][1]);

    return 0;
}
