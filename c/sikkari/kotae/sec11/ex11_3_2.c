// ポインタで文字列リテラルを表示するプログラム
#include <stdio.h>

int main(void)
{
    // 文字列リテラルの先頭要素のアドレスをポインタpに代入
    const char *p = "Hello";    // contsで読み取り専用を強調

    while (*p != '\0') {    // ナル文字までループ
        printf("%c\n", *p); // ポインタの指す文字を表示
        p++;                // ポインタを次の文字に進める
    }

    return 0;
}