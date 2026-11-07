#include <stdio.h>

// 点を表す構造体
typedef struct { 
    int x;  // x座標
    int y;  // y座標
} Point;

void move_point(Point *p, int dx, int dy);

int main(void)
{
    Point pt = {3, 4};    // 点

    printf("移動前 (%d, %d)\n", pt.x, pt.y);

    // 点を移動
    int mv_x = 12;
    int mv_y = -5;
    move_point(&pt, mv_x, mv_y);

    // 結果を表示
    printf("x:%d y:%d 移動後 (%d, %d)\n", mv_x, mv_y, pt.x, pt.y);

    return 0;
}

// 点の座標を移動する関数
void move_point(Point *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}

