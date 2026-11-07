#include <stdio.h>
#include <stdint.h> // uint8_tを使用するためにインクルード

#define BIT_SIZE 8  // 8ビットサイズ

int correct_parity(uint8_t data[]);
void print_bits(uint8_t data[]);

int main(void)
{
    uint8_t data[] = {
        0xff, 0x00, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00
    };

    printf("【元のビットパターン】\n");
    print_bits(data);

    // パリティチェックとエラー訂正
    int result = correct_parity(data);
    
    if (result == 1) {
        printf("パリティエラーはありません。\n");
    }
    else if (result == 2) {
        printf("\n【修正後のビットパターン】\n");
        print_bits(data);
    }
    else {
        printf("パリティビットの判定に失敗しました。\n");
    }

    return 0;
}

// 水平・垂直パリティを検査し、エラーの位置を修正する関数
int correct_parity(uint8_t data[])
{
    int row_parity[BIT_SIZE] = {0}; // 各行の1の数
    int col_parity[BIT_SIZE] = {0}; // 各列の1の数

    // 行と列の1の数をカウント
    for (int i = 0; i < BIT_SIZE; i++) {
        for (int j = 0; j < BIT_SIZE; j++) {
            int bit = (data[i] >> (BIT_SIZE - 1 - j)) & 1;
            row_parity[i] += bit;
            col_parity[j] += bit;
        }
    }

    // エラーのある行・列を特定
    int odd_rows[BIT_SIZE], odd_cols[BIT_SIZE];
    int odd_row_cnt = 0, odd_col_cnt = 0;

    for (int i = 0; i < BIT_SIZE; i++) {
        if (row_parity[i] & 1)
            odd_rows[odd_row_cnt++] = i;
        if (col_parity[i] & 1)
            odd_cols[odd_col_cnt++] = i;
    }

    // エラーなし
    if (odd_row_cnt == 0 && odd_col_cnt == 0)
        return 1;

    // 行・列とも１箇所ずつ → 単一ビット誤りなので訂正
    if (odd_row_cnt == 1 && odd_col_cnt == 1) {
        int r = odd_rows[0];
        int c = odd_cols[0];
        printf("パリティエラー発見: 行 %d, 列 %d のビットに誤りがあります。\n", r, c);
        data[r] ^= (1U << (BIT_SIZE - 1 - c));   // ビット反転で訂正
        return 2;
    }

    // それ以外は矛盾（複数ビット誤りなど）
    return 0;
}

// ビットパターンを表示する関数
void print_bits(uint8_t data[])
{
    for (int i = 0; i < BIT_SIZE; i++) {
        for (int j = (BIT_SIZE - 1); j >= 0; j--) { 
            printf("%d", (data[i] >> j) & 1);
        }
        printf("\n");
    }
}