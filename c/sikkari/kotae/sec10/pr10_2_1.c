#include <stdio.h>
#define ROW_COUNT 9     // 行数
#define COLUMN_COUNT 9  // 列数

int main(void)
{
    int multiplication_table[ROW_COUNT][COLUMN_COUNT];

    // 九九の表の作成
    for (int row = 1; row <= ROW_COUNT; row++) {
        for (int col = 1; col <= COLUMN_COUNT; col++) {
            multiplication_table[row-1][col-1] = row * col;
        }
    }

    // 内容の表示
    for (int row = 1; row <= ROW_COUNT; row++) {
        for (int col = 1; col <= COLUMN_COUNT; col++) {
            printf("%3d", multiplication_table[row-1][col-1]);
        }
        printf("\n");
    }

    return 0;
}
