#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 30   // 文字列の最大長さ

int main(void) {
    char result[MAX_LENGTH+1] = ""; // 結果を格納する配列（最後の文字はナル文字用）
    char str[MAX_LENGTH+1];         // 入力文字列を格納する配列

    printf("文字列を繰り返し入力してください（%d文字ちょうどで終了します）\n", MAX_LENGTH);

    while (strlen(result) < MAX_LENGTH) {
        printf("追加する文字列＞ ");
        if (fgets(str, sizeof(str), stdin) == NULL) {
            printf("入力エラーが発生しました。\n");
            break;
        }

        // 改行文字を除去
        size_t str_length = strlen(str);
        if (str_length > 0 && str[str_length - 1] == '\n') {
            str[str_length - 1] = '\0';
        }
        // 配列に連結
        strncat(result, str, MAX_LENGTH - strlen(result));
    }
    printf("完成した文字列：%s（%zu文字）\n", result,  strlen(result));

    return 0;
}
