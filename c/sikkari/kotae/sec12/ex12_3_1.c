// 入力文字列の長さを調べるプログラム
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("文字列を入力してください（最大99文字）＞ ");
    scanf("%99s", s);

    size_t len = strlen(s);
    printf("%sの文字数は%zuです。\n", s, len);

    return 0;
}

