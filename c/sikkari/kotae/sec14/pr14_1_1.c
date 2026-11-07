#include <stdio.h>
#include <string.h>

#define BASE_LENGTH 40  // ベースとなる文字列の長さ（終端文字を含む）

int main(void)
{
    char base[BASE_LENGTH];   // ベースとなる文字列
    char input[BASE_LENGTH];  // ユーザーが入力する文字列
    
    // ベースとなる文字列を '-' で埋める
    memset(base, '-', BASE_LENGTH - 1);
    base[BASE_LENGTH - 1] = '\0'; // 文字列の終端を設定
    
    // 文字列を入力してもらう
    printf("中央に配置する文字列を入力してください＞ ");
    fgets(input, sizeof(input), stdin);

    // 改行が含まれていたら削除する
    size_t len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // 文字列が長すぎる場合のエラーチェック
    if (len >= BASE_LENGTH) {
        printf("エラー: 入力された文字列が長すぎます。\n");
        return 1;
    }

    size_t start = (BASE_LENGTH - strlen(input)) / 2;

    // 真ん中にコピー
    memcpy(&base[start], input, strlen(input));
    
    printf("編集後の文字列: %s\n", base);

    return 0;
}