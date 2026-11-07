// char型配列に文字列を入力するプログラム
#include <stdio.h>

int main(void)
{
    char str[100];

    printf("文字列を入力してください。＞ ");
    scanf("%99s", str);
    printf("入力データを文字列で出力 :%s\n", str);

    return 0;
}
