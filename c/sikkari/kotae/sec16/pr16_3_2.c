#include <stdio.h>
#include <stdint.h> // uint32_tを使用するためにインクルード
#include <limits.h> // CHAR_BITを使用するためにインクルード

void print_bits(uint32_t n);

int main(void)
{
    uint32_t num;

    // ユーザーに入力を求める
    printf("0 ～ %#x の16進数を入力してください。＞ ", UINT32_MAX);
    if (scanf("%x", &num) != 1) {
        printf("入力エラー\n");
        return 1;
    }

    // ビットパターンを表示
    printf("ビットパターン\n");
    print_bits(num);

    return 0;
}

// uint32_t のビットパターンを表示する関数
void print_bits(uint32_t n)
{
	int len = (int)sizeof(n) * CHAR_BIT;
    // 上位ビット（31）から下位ビット（0）までループ
	for (int i = len - 1; i >= 0; i--) {
        // i ビット目を取り出して表示
        printf("%d", (n >> i) & 1);
        // 4ビットごとにスペース表示
        printf("%s", i % 4 ?  "" : " "); // 条件演算子「条件(i % 4)が真なら""、偽なら" "」
    }
    printf("\n");
}
