#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char str[256];
    char result[256];

    printf("文字列を入力してください＞ ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("入力エラーが発生しました。\n");
        return 1;  // 直ちに終了
    }

    // 末尾に入る可能性のある改行文字を除去
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int read_idx = 0;   // strを読む位置
    int write_idx = 0;  // resultに書き込む位置

    // 先頭の空白をスキップする
    while (isspace(str[read_idx])) {
        read_idx++;
    }

    // 本文中の連続空白を圧縮しながらコピーする
    while (str[read_idx] != '\0') {
        // 空白文字でなければそのままコピー
        if (!isspace(str[read_idx])) {
            result[write_idx] = str[read_idx];
            write_idx++;
            read_idx++;
        }
        else {
            // 空白を見つけたら、連続する空白をまとめてスキップ
            while (isspace(str[read_idx])) {
                read_idx++;
            }
            // まだ文字列が終わっていない場合はスペースを1つ入れる
            if (str[read_idx] != '\0') {
                result[write_idx++] = ' ';
            }
        }
    }

    // 出力文字列にナル文字を付加
    result[write_idx] = '\0';

    // 結果を表示
    printf("結果の文字列: \"%s\"\n", result);

    return 0;
}
