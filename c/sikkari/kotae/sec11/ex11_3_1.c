// ポインタで文字列を操作するプログラム
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World.";
    char *p = str;  // strの先頭要素のアドレスをポインタpに代入

    printf("変換前：%s\n", str);    // 変換前の文字列を表示

    while (*p != '\0') {    // ナル文字 '\0' に到達するまでループ
        if (*p >= 'A' && *p <= 'Z') {   // 大文字なら
            *p += ('a' - 'A');  // 大文字('A'～'Z')を小文字('a'～'z')へ変換
        }
        p++;    // ポインタを次の文字に進める
    }

    printf("変換後：%s\n", str);    // 変換後の文字列を表示

    return 0;
}
