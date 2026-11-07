// フィールド幅、フラグ、精度を確認するプログラム
#include <stdio.h>

int main(void)
{
    printf("フィールド幅\n");
    printf("[%5d]\n", 10);
    printf("[%3d]\n", 10000);
    printf("[%12f]\n", 123.456);

    printf("\nフラグ\n");
    printf("[%-5d]\n", 10);
    printf("%+d\n", 10);
    printf("%#x\n", 10);
    printf("%#o\n", 10);
    printf("%05d\n", 10);

    printf("\n精度\n");
    printf("[%10.2f]\n", 12345.678);
    printf("[%.2f]\n", 12345.678);
    printf("[%.5s]\n", "abcdefg");

    return 0;
}