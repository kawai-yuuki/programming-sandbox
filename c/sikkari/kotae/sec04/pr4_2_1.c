#include <stdio.h>

int main(void) 
{
    // int型の変数aとbを宣言し、aには10、bには20で初期化する
    int a = 10;
    int b = 20;
    printf("aの値は%dで、bの値は%dです。\n", a, b);

    // double型の変数xとyを宣言する
    double x, y;
    // xに12.34、yに56.78を代入する
    x = 12.34;
    y = 56.78;
    printf("xの値は%.2fで、yの値は%.2fです。\n", x, y);

    // char型の変数letterを宣言し、ASCIIコード65で初期化する
    char letter = 65;   // ASCIIコード65は'A'
    printf("letterの値は%cです。\n", letter);

    return 0;
}
