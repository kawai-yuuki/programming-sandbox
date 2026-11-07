// 定数を使用したプログラム
#include <stdio.h>

int main(void) 
{
    // 整数定数の使用
    int num = 10;
    printf("整数定数: %d\n", num);

    // 浮動小数点定数の使用
    double pi = 3.14159;
    printf("浮動小数点定数: %.5f\n", pi);

    // 文字定数の使用
    char letter;
    letter = 'A';
    printf("文字定数: %c\n", letter);

    // 文字列リテラルの使用
    printf("文字列リテラル: %s\n", "Hello, World!");
	
    return 0;
}
