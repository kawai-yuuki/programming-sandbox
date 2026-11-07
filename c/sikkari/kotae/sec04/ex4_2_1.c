// 変数の大きさを調べるプログラム
#include <stdio.h>

int main(void) 
{
    int number;
    double temperature; 
    char letter;

    printf("変数の大きさを調べます。\n");
    printf("int型の変数 number の大きさは%zuバイト\n", sizeof(number));
    printf("double型の変数 temperature の大きさは%zuバイト\n", sizeof(temperature));
    printf("char型の変数 letter の大きさは%zuバイト\n", sizeof(letter));

    return 0;
}
