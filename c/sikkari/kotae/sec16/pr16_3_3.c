#include <stdio.h>
#include <stdint.h> // uint32_tを使用するためにインクルード
#include <limits.h> // CHAR_BITを使用するためにインクルード

uint32_t bit_off(uint32_t n, int pos);
uint32_t bit_on(uint32_t n, int pos);
void print_bits(uint32_t n);

int main(void)
{
    uint32_t num;
    int pos;

    // 初期値の入力
    printf("0 ～ %#x の16進数を入力してください。＞ ", UINT32_MAX);
    if (scanf("%x", &num) != 1) {
        printf("入力エラー\n");
        return 1;
    }
    printf("元のビットパターン\n");
    print_bits(num);

    // ビットを ON にする
    int bit_max = (int)sizeof(uint32_t) * CHAR_BIT - 1;
	printf("\nONするビット位置(最下位: 0 ～ 最上位: %d）＞ ", bit_max);
    if (scanf("%d", &pos) != 1 || pos < 0 || pos > bit_max) {
        printf("ビット位置が範囲外です。\n");
        return 1;
    }
    uint32_t on_result = bit_on(num, pos);
    printf("ビット%dをONにした結果\n", pos);
    print_bits(on_result);

    // ビットを OFF にする
	printf("\nOFFするビット位置(最下位: 0 ～ 最上位: %d）＞ ", bit_max);
    if (scanf("%d", &pos) != 1 || pos < 0 || pos > bit_max) {
        printf("ビット位置が範囲外です。\n");
        return 1;
    }
    uint32_t off_result = bit_off(num, pos);
    printf("ビット%dをOFFにした結果\n", pos);
    print_bits(off_result);

    return 0;
}

// 指定したビットを ON にする
uint32_t bit_on(uint32_t n, int pos)
{
    uint32_t bit = 1U;
	bit <<= pos;        // bit(1U)をposだけ左シフト
	return n | bit;     // 指定したビット位置をORで1にする
}

// 指定したビットを OFF にする
uint32_t bit_off(uint32_t n, int pos)
{
    uint32_t bit = 1U;
	bit <<= pos;        // bit(1U)をposだけ左シフト
	return n & ~bit;    // 指定したビット位置をANDで0にする
}

// uint32_t のビットパターンを表示する関数（pr16-3-2.c で作成済み）
void print_bits(uint32_t n)
{
	int len = (int)sizeof(n) * CHAR_BIT;
    // 上位ビット（31）から下位ビット（0）までループ
	for (int i = len - 1; i >= 0; i--) {
        // i ビット目を取り出して表示
        printf("%d", (n >> i) & 1);
        // 4ビットごとにスペース表示
        printf("%s", i % 4 ?  "" : " ");
    }
    printf("\n");
}
