#include <stdio.h>
#include <stdint.h> // uint32_tを使用するためにインクルード

int bit_check(uint32_t n, int pos);

int main(void)
{
    uint32_t num;
    int pos, result;

    // 初期値の入力
    printf("0 ～ %#xの16進数を入力してください。＞ ", UINT32_MAX);
    if (scanf("%x", &num) != 1) {
        printf("入力エラー\n");
        return 1;
    }

    // チェックするビット位置を入力
    printf("チェックするビット位置（0 ～ 31）＞ ");
    if (scanf("%d", &pos) != 1 || pos < 0 || pos > 31) {
        printf("ビット位置が範囲外です。\n");
        return 1;
    }

    // 指定したビットの状態を判定
    result = bit_check(num, pos);
    if (result != -1) {
        printf("ビット%dは%dです。\n", pos, result);
    }

    return 0;
}

// 指定したビットの状態を判定する関数
int bit_check(uint32_t n, int pos)
{
    if (pos < 0 || pos > 31) {
        printf("エラー: 指定したビット位置が範囲外です。\n");
        return -1; // エラーリターン
    }

    uint32_t bit = n >> pos;    // pos ビットを右端に移動
    return bit & 1;             // & 1 で判定
}

