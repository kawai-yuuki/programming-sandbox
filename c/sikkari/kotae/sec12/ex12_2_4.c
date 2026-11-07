// 「Ctrl+Z」が入力されるまで文字列の入出力を繰り返すプログラム
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];  // 入力文字列を格納する配列

    puts("文字列を連続で入力してください（最大99文字）");
    puts("「Ctrl+Z」の入力で終了します。");

    while (fgets(s, sizeof(s), stdin) != NULL) {    // 標準入力から文字列を読み取る
        // 改行文字を除去する
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';  // '¥0'で書き換える
        }
        printf("入力文字列：%s\n", s);
    }

    return 0;
}
