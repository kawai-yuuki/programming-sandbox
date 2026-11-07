#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100  // 保存する文字列の最大数
#define MAX_LENGTH 256 // 1行の最大長

int main(void)
{
    char *lines[MAX_LINES];  // 文字列を格納するポインタの配列
    int count = 0;           // 入力された行数
    char buffer[MAX_LENGTH]; // 入力バッファ

    printf("文字列を入力してください (終了条件：Ctrl+Z)。\n");

    // 「Ctrl+Z」が入力されるまで文字列の入出力を繰り返す
    while ((fgets(buffer, MAX_LENGTH, stdin) != NULL) && (count < MAX_LINES)) {
        size_t len = strlen(buffer);

        // 末尾の改行を削除（fgetsは改行を含む）
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }

        // 入力文字列の長さに基づいてメモリを確保
        lines[count] = (char *)malloc(len);
        if (lines[count] == NULL) {
            printf("メモリ確保に失敗しました。\n");
            break;  // メモリ不足時は終了
        }

        // 確保したメモリにコピー
        memcpy(lines[count], buffer, len);
        count++;
    }

    // 入力された内容を表示
    printf("\n入力された文字列\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", lines[i]);
    }

    // メモリを解放
    for (int i = 0; i < count; i++) {
        free(lines[i]);
    }

    return 0;
}
