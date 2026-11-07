// 変数の大きさを調べるプログラム
#include <stdio.h>

int main(void) 
{
    printf("変数の大きさを調べます。\n");

    int number1, number2;
    printf("int型の変数 number1 の大きさは%zuバイト\n", sizeof(number1));
    printf("int型の変数 number2 の大きさは%zuバイト\n", sizeof(number2));

    char letter1, letter2, letter3;
    printf("char型の変数 letter1 の大きさは%zuバイト\n", sizeof(letter1));
    printf("char型の変数 letter2 の大きさは%zuバイト\n", sizeof(letter2));
    printf("char型の変数 letter3 の大きさは%zuバイト\n", sizeof(letter3));

    return 0;
}
