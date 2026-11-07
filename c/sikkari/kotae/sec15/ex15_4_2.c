// 構造体の変数をアドレス渡しする関数
#include <stdio.h>

// 点を表す構造体
typedef struct {
    int x;  // x座標
    int y;  // y座標
} Point;

void print_point(const Point *p);

int main(void)
{
    Point pt = {10, 20};
    print_point(&pt);
    return 0;
}

void print_point(const Point *p)
{
    printf("Point: (%d, %d)\n", p->x, p->y);
}
