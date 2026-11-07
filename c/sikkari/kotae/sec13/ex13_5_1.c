// ローカル変数を確認するプログラム
#include <stdio.h>

void func(void);

int main(void)
{
    int a = 20;       // ローカル変数（main関数内のみ有効）

    func();
    printf("[main a] アドレス: %p\t値: %d\n", &a, a);

    return 0;
}

void func(void)
{
    int a = 10;       // ローカル変数（func関数内のみ有効）
    printf("[func a] アドレス: %p\t値: %d\n", &a, a);
}
