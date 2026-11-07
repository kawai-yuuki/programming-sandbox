#include <stdio.h>

int main(void)
{
    char str[100];   // 文字列を格納する配列
    char target;     // 検索対象の文字
    int count = 0;   // カウント用の変数

    // ユーザーに文字列を入力させる
    printf("文字列を入力してください（最大99文字）＞ ");
    scanf("%99s", str);

    // 検索対象の文字を入力させる
    printf("検索する文字を入力してください＞ ");
    scanf(" %c", &target); // 先頭に空白を入れることで改行を無視

    // 文字列を1文字ずつ確認するループ
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++; // 一致する文字があればカウントを増やす
        }
    }

    // 結果を表示
    printf("文字\'%c\' は文字列中に %d 回含まれています。\n", target, count);

    return 0;
}
