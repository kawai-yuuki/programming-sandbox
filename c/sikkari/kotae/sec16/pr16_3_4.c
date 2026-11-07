#include <stdio.h>
#include <stdint.h> // uint32_tを使用するためにインクルード
#include <limits.h> // CHAR_BITを使用するためにインクルード

uint32_t reverse_bits(uint32_t n);
void print_bits(uint32_t n);

int main(void)
{
    uint32_t num;

    // 初期値の入力
    printf("0 ～ %#x の16進数を入力してください。＞ ", UINT32_MAX);
    if (scanf("%x", &num) != 1) {
        printf("入力エラー\n");
        return 1;
    }

    /* ビット反転処理 */
    uint32_t reversed_num = reverse_bits(num);

    /* 結果を表示 */
    printf("元のビットパターン\n");
    print_bits(num);
    printf("反転後のビットパターン\n");
    print_bits(reversed_num);

    return 0;
}

// ビットパターンを左右反転する関数
uint32_t reverse_bits(uint32_t n) 
{
	uint32_t mask = 1U, bit, reversed = 0U;
	int len = (int)sizeof(n) * CHAR_BIT;
	mask <<= len - 1;

	for (int i = 0; i < len; i++) {
        if (n & mask) {
            bit = (1U << i);
            reversed |= bit;     // 反転位置に1をセット
        }
		mask >>= 1;
	}
	return reversed;
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