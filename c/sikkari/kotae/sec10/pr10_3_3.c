#include <stdio.h>
#define WORD_COUNT 5

int main(void)
{
    char words[WORD_COUNT][20] = {"Apple", "Banana", "Cherry", "Durian", "Elderberry"};
    int max_length = 0; // 最長の文字列の長さ
    int max_index = 0;  // 最長の文字列が格納されているインデックス

    // 文字列を一つずつ処理
    for (int i = 0; i < WORD_COUNT; i++) {
        int length = 0;

        // 現在の文字列の長さを計算（'\0'までカウント）
        for (int j = 0; words[i][j] != '\0'; j++) {
            length++;
        }

        // 最長の文字列を更新
        if (length > max_length) {
            max_length = length;
            max_index = i;
        }
    }

    // 結果を表示
    printf("最も長い文字列は\"%s\"です。長さは%d文字です。\n", words[max_index], max_length);

    return 0;
}
