#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
    // 使用する文字セット
    char pass_chrs[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    // 乱数のシードを初期化
    srand((unsigned int)time(NULL));

    // パスワードの長さをランダムに決定（8～16文字）
    int pass_len = rand() % 9 + 8;

    // パスワードを格納する配列
    char password[17]; // 最大16文字＋ナル文字用

    // パスワードの生成
    size_t chars_len = strlen(pass_chrs);
    for (int i = 0; i < pass_len; i++) {
        int r = rand() % chars_len;	// 文字セットの位置を算出
        password[i] = pass_chrs[r];	// 文字を選ぶ
    }
    password[pass_len] = '\0'; // ナル文字を追加

    // 結果を出力
    printf("生成されたパスワード: %s\n", password);

    return 0;
}
