// グローバル変数を確認するプログラム
#include <stdio.h>

void func(void);

int g_val1 = 100;  // グローバル変数

int main(void)
{
    printf("[main g_val1] アドレス: %p\t値: %d\n\n", &g_val1, g_val1);
    func();
    printf("[main g_val1] アドレス: %p\t値: %d\n", &g_val1, g_val1);
    // printf("[func g_va2] アドレス: %p\t値: %d\n\n", &g_val2, g_val2);

    return 0;
}

int g_val2 = 100;  // グローバル変数
void func(void)
{
    printf("[func g_val1] アドレス: %p\t値: %d\n", &g_val1, g_val1);
    printf("[func g_val2] アドレス: %p\t値: %d\n\n", &g_val2, g_val2);
    g_val1++;
}


