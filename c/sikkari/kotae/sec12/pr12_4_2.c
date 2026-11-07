#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[100];  // 入力用の配列（最大99文字＋終端文字）
    char output[100]; // 変換後の出力用配列

    printf("文字列を入力してください（最大99文字）＞ ");
    if (fgets(input, sizeof(input), stdin) != NULL) {   // 標準入力から文字列を取得
        // 文字列を1文字ずつ変換
        int i = 0;
        while (input[i] != '\0' && input[i] != '\n') { // 終端文字あるいは改行文字まで繰り返す
            if (isupper(input[i])) {
                output[i] = tolower(input[i]); // 大文字を小文字に変換
            } else if (islower(input[i])) {
                output[i] = toupper(input[i]); // 小文字を大文字に変換
            } else {
                output[i] = input[i]; // その他の文字はそのまま
            }
            i++;
        }
        output[i] = '\0'; // 改行文字をナル文字に変換（変換後の文字列を正しく終了させる）

        printf("変換後の文字列：[%s]\n", output); // 結果を出力
    }
    else {
        printf("入力エラーが発生しました。\n");
    }

    return 0;
}
