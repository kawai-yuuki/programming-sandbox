// 変数を指すポインタを確認するプログラム
#include <stdio.h>

int main(void)
{
    int x = 10;      // 通常の整数変数
    int *p;          // 整数型ポインタを宣言
    p = &x;          // 変数xのアドレスをポインタpに代入

    printf("xの値: %d\n", x);       // xの値を表示
    printf("xのアドレス: %p\n", p); // ポインタpが指しているアドレスを表示
    printf("pが指す値: %d\n", *p);  // ポインタpが指している値を表示

    *p = 20;         // ポインタpを使ってxの値を変更
    printf("変更後のxの値: %d\n", x);

    return 0;
}
