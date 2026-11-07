#include <stdio.h>

#define WIDTH 8     // 横幅
#define HEIGHT 8    // 高さ

int main(void)
{
    int matrix[HEIGHT][WIDTH] = {       // 元の配列
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0}
    };
    int matrix2[HEIGHT][WIDTH] = {0};   // 回転/反転後の配列
    int rotate_mode;                    // 回転モード

    // 元の配列を表示
    printf("元の配列の表示\n");
    for (int h = 0; h < HEIGHT; h++) {
        for (int w = 0; w < WIDTH; w++) {
            if (matrix[h][w] == 0) {
                printf("□ ");
            } else {
                printf("■ ");
            }
        }
        printf("\n");
    }

    // 回転モードの入力
    printf("\n1: 右へ90度回転\n");
    printf("2: 左へ90度回転\n");
    printf("3: 上下反転\n");
    printf("4: 左右反転\n");
    printf("回転モードを指定してください＞ ");
    scanf("%d", &rotate_mode);

    switch(rotate_mode) {
        case 1: // 右90度回転
            for (int h = 0; h < HEIGHT; h++) {
                for (int w = 0; w < WIDTH; w++) {
                    matrix2[w][WIDTH - 1 - h] = matrix[h][w];
                }
            }
            break;

        case 2: // 左90度回転
            for (int h = 0; h < HEIGHT; h++) {
                for (int w = 0; w < WIDTH; w++) {
                    matrix2[HEIGHT - 1 - w][h] = matrix[h][w];
                }
            }
            break;

        case 3: // 上下反転
            for (int h = 0; h < HEIGHT; h++) {
                for (int w = 0; w < WIDTH; w++) {
                    matrix2[HEIGHT - 1 - h][w] = matrix[h][w];
                }
            }
            break;

        case 4: // 左右反転
            for (int h = 0; h < HEIGHT; h++) {
                for (int w = 0; w < WIDTH; w++) {
                    matrix2[h][WIDTH - 1 - w] = matrix[h][w];
                }
            }
            break;

        default:
            printf("不正な入力です。\n");
            return 0;
    }

    // 結果の配列を表示
    printf("\n結果の配列の表示\n");
    for (int h = 0; h < HEIGHT; h++) {
        for (int w = 0; w < WIDTH; w++) {
            if (matrix2[h][w] == 0) {
                printf("□ ");
            } else {
                printf("■ ");
            }
        }
        printf("\n");
    }

    return 0;
}
