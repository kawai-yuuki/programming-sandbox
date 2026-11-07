#include <stdio.h>

// 長方形を表す構造体
typedef struct {
    int x1, y1;  // 左上の座標
    int x2, y2;  // 右下の座標
} Rectangle;

int main(void)
{
    // 構造体の配列を定義（5つの長方形の情報を格納）
    Rectangle r[5] = {
        {0, 0, 5, 4},
        {1, 2, 6, 6},
        {2, 3, 8, 9},
        {1, 3, 4, 10},
        {2, 0, 5, 5}
    };

    int max_index = 0; // 最大の面積を持つ長方形のインデックス
    int max_area = (r[0].x2 - r[0].x1) * (r[0].y2 - r[0].y1);

    // 最大面積の長方形を探す
    for (int i = 1; i < 5; i++) {
        int area = (r[i].x2 - r[i].x1) * (r[i].y2 - r[i].y1);
        if (area > max_area) {
            max_area = area;
            max_index = i;
        }
    }

    // 一番面積が大きい長方形の情報を表示
    printf("一番面積の大きい長方形\n");
    printf("左上座標: (%d, %d)\n", r[max_index].x1, r[max_index].y1);
    printf("右下座標: (%d, %d)\n", r[max_index].x2, r[max_index].y2);
    printf("面積: %d\n", max_area);

    return 0;
}
