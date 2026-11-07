#include <stdio.h>
#include <stdint.h> // uint16_tを使用するためにインクルード
#include <limits.h> // CHAR_BITを使用するためにインクルード

uint16_t twos_complement(uint16_t n);

int main(void)
{
    uint16_t num, complement;

    // ユーザーに入力を求める
    printf("0 ～ %hu の整数値を入力してください。＞ ", UINT16_MAX);
    if (scanf("%hu", &num) != 1) {
        printf("入力エラー\n");
        return 1;
    }

    // 2 の補数を計算
    complement = twos_complement(num);

    // 結果を出力
    int32_t num2 = num;
    printf("%dの2の補数（16ビット）: %#x\n", -num2, complement);

    return 0;
}

// 2 の補数を求める関数
uint16_t twos_complement(uint16_t n)
{
    return ~n + 1;  // 1の補数（~n）に1を足す
}
