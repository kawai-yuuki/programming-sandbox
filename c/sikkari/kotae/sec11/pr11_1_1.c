#include <stdio.h>

int main(void)
{
    double array[30]; // 要素数30のdouble型配列を宣言

    printf("配列arrayの各要素のアドレス:\n");

    for (int i = 0; i < 30; i++) {
        printf("array[%d]のアドレス: %p\n", i, &array[i]);
    }

    return 0;
}
