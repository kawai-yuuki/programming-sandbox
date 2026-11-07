#include <stdio.h>

int main(void)
{
    char ch = 'T';       // 文字'T'を変数chに代入
    char *p = &ch;       // chのアドレスをポインタpに代入

    // chのアドレスを表示
    printf("chのアドレス: %p\n", &ch);

    // chの値を表示
    printf("chの値: %c\n", ch);

    // ポインタpの値（chのアドレス）を表示
    printf("ポインタpの値: %p\n", p);

    // ポインタpの指す値（chの値）を表示
    printf("ポインタpの指す値: %c\n", *p);

    return 0;
}
