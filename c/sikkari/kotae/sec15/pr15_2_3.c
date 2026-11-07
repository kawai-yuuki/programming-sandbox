#include <stdio.h>
#include <math.h>

// 点を表す構造体
typedef struct {
    int x;  // x座標
    int y;  // y座標
} Point;

// 長方形を表す構造体
typedef struct {
    Point top_left;      // 左上座標
    Point bottom_right;  // 右下座標
} Rectangle;

int main(void)
{
    Rectangle rects[3];
    int max_index = 0;
    double max_diagonal = 0;

    // 長方形の入力
    for (int i = 0; i < 3; i++) {
        printf("長方形%dの左上座標 (x y) を入力＞ ", i + 1);
        scanf("%d %d", &rects[i].top_left.x, &rects[i].top_left.y);
        printf("長方形%dの右下座標 (x y) を入力＞ ", i + 1);
        scanf("%d %d", &rects[i].bottom_right.x, &rects[i].bottom_right.y);
    }

    // 最も長い対角線を持つ長方形を探す
    for (int i = 0; i < 3; i++) {
        int dx = rects[i].bottom_right.x - rects[i].top_left.x;
        int dy = rects[i].bottom_right.y - rects[i].top_left.y;
        double diag = sqrt(dx * dx + dy * dy);
        if (diag > max_diagonal) {
            max_diagonal = diag;
            max_index = i;
        }
    }

    // 結果を表示
    printf("\n最も長い対角線を持つ長方形\n");
    printf("左上座標: (%d, %d)\n", rects[max_index].top_left.x, rects[max_index].top_left.y);
    printf("右下座標: (%d, %d)\n", rects[max_index].bottom_right.x, rects[max_index].bottom_right.y);
    printf("対角線の長さ: %.2f\n", max_diagonal);

    return 0;
}