#include <stdio.h>

int main(void)
{
    char str[10][20];   // 要素数10×20のchar型2次元配列を宣言

    printf("2次元配列strの各行の先頭要素のアドレス:\n");

    for (int i = 0; i < 10; i++) {
        printf("str[%d]の先頭要素のアドレス: %p\n", i, str[i]);
    }

    return 0;
}
