// 関数内のローカル変数を確認するプログラム
#include <stdio.h>

int main(void)
{
    int n = 1; 

    printf("[ループ前のn] アドレス: %p\t値: %d\n\n", &n, n);    
    for (int i = 1; i <= 3; i++) {
        int n = 10;
        printf("[ループ中のn] アドレス: %p\t値: %d\n", &n, n);
        printf("[ループ中のi] アドレス: %p\t値: %d\n", &i, i);
    }
    printf("\n[ループ後のn] アドレス: %p\t値: %d\n", &n, n);

    // printf("[ループ後のi] アドレス: %p\t値: %d\n", &i, i);

    return 0;
}
