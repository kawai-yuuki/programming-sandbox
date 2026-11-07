#include <stdio.h>
#include <string.h>

// 円を表す構造体
struct circle_info {
    int x;            // 中心のx座標
    int y;            // 中心のy座標
    double radius;    // 半径
    char color[20];   // 色
};

int main(void)
{
    // 構造体の配列を定義（3つの円の情報を格納）
    struct circle_info circles[3] = {
        {0, 0, 10.5},
        {5, -3, 7.2},
        {-8, 6, 12.0}
    };

    // 色の情報を設定
    strcpy(circles[0].color, "Red");
    strcpy(circles[1].color, "Blue");
    strcpy(circles[2].color, "Yellow");

    // 各円の情報を表示
    printf("円の情報\n");
    for (int i = 0; i < 3; i++) {
        printf("円 %d: 中心(%d, %d), 半径 %.1f, 色 %s\n", 
               i + 1, circles[i].x, circles[i].y, circles[i].radius, circles[i].color);
    }

    return 0;
}
