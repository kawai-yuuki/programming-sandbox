// 小文字を大文字に変換するプログラム
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;

    printf("繰り返し文字を入力してください。（終了条件：Ctrl+Z）\n");
    while ((c = getchar()) != EOF) {
        if (c == '\n') continue;
        c = toupper(c);
        printf("変換文字：%c\n", c);
    }

    return 0;
}
