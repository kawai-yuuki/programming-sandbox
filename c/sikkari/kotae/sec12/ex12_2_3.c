// 入力した文字列をそのまま出力するプログラム
#include <stdio.h>

int main(void)
{
    char s[100];  // 入力文字列を格納する配列

    printf("文字列を入力してください（最大99文字）＞ ");

    // 標準入力から文字列を読み取る
    if (fgets(s, sizeof(s), stdin) != NULL) {
        printf("入力文字列：");
        puts(s);  // 読み取った文字列を出力する
    } else {
        puts("入力エラーが発生しました。");
    }

    return 0;
}
