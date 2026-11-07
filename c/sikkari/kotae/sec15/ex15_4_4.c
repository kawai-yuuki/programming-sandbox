// 構造体を返す関数
#include <stdio.h>

// 長方形を表す構造体
typedef struct {
    int x1, y1;  // 左上の座標
    int x2, y2;  // 右下の座標
} Rectangle1;

typedef struct {
    int x, y;   // 左上の座標
    int width;  // 幅
    int height; // 高さ
} Rectangle2;

Rectangle2 change_rect_type(Rectangle1 rect1);

int main(void)
{
    Rectangle1 r1 = {10, 20, 100, 100};
    Rectangle2 r2 = change_rect_type(r1);
    printf("x = %d, y = %d, width = %d, height = %d\n",
         r2.x, r2.y, r2.width, r2.height);

    return 0;
}

// 長方形の型を変換する関数
Rectangle2 change_rect_type(Rectangle1 rect1)
{
    Rectangle2 rect2;
    rect2.x = rect1.x1;
    rect2.y = rect1.y1;
    rect2.width = rect1.x2 - rect1.x1;
    rect2.height = rect1.y2 - rect1.y1;
    return rect2;
}
