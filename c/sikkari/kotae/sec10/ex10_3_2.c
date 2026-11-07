// for文で文字列の長さを測るプログラム
#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    printf("文字列を入力してください（最大99文字）＞ ");
    scanf("%99s", str);

    // ナル文字に到達するまでカウント
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("文字列の長さは%d文字です。\n", length);

    return 0;
}
