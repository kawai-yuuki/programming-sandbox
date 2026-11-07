#include <stdio.h>

int main(void)
{
    int value = 123;    // int型変数valueの初期化

    // valueの値を10進、8進、16進で表示
    printf("10進 : %d\n", value);
    printf("8進  : %o\n", value);
    printf("16進 : %x\n", value);
    printf("10進 : %d\t8進 : %o\t16進 : %x\n", value, value, value);

    return 0;
} 
