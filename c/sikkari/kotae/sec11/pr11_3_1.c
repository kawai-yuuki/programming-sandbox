#include <stdio.h>

int main(void)
{
    // 文字列リテラルの先頭要素のアドレスをポインタpに代入
    const char *p = "Hello, World! C Programming is Fun.";

    printf("元の文字列：%s\n", p);
    printf("含まれる大文字：");
    while (*p != '\0') {    // ナル文字までループ
        if (*p >= 'A' && *p <= 'Z') {   // ポインタの指す文字が大文字なら
            printf("%c", *p);         // 表示
        }
        p++;                // ポインタを次の文字に進める
    }
    printf("\n");

    return 0;
}