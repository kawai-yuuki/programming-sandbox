// 「Ctrl+Z」または「Ctrl+D」が入力されるまで文字の入出力を繰り返すプログラム
#include <stdio.h>

int main(void)
{
    int ch;

    // EOFが返されるまで、入力文字を繰り返し受け取り続ける
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}