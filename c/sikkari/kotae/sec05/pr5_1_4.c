#include <stdio.h>

int main(void)
{
    printf("右詰め5桁: [%5d]\n", 100);
    printf("左詰め5桁: [%-5d]\n", 100);
    printf("+符号付き: [%+d]\n", 100);
    printf("0埋め5桁: [%05d]\n", 100);
    printf("16進: [%#x]\n", 100);
    printf("整数部4桁、小数点以下2桁: [%7.2f]\n", 123.456);
    printf("小数点以下5桁: [%.5f]\n", 123.456);
    printf("最初の5文字: [%.5s]\n", "everyday");

    return 0;
}
