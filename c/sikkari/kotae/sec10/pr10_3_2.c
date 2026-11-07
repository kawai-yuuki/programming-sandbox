#include <stdio.h>

int main(void)
{
    char str[100];          // ユーザーから入力された文字列を格納
    int is_palindrome = 1;  // 回文かどうかを判定するフラグ（1:回文, 0:回文でない）

    // ユーザーに文字列を入力させる
    printf("文字列を入力してください（最大99文字）＞ ");
    scanf("%99s", str);

    // 文字列の長さを取得
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // 左右の文字を比較して回文かどうかを判定
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0; // 左右の文字が異なる場合、回文ではない
            break;
        }
    }

    // 判定結果を出力
    if (is_palindrome == 1) {
        printf("入力された文字列は回文です。\n");
    } else {
        printf("入力された文字列は回文ではありません。\n");
    }

    return 0;
}
