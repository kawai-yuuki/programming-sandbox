#include <stdio.h>
#include <stdlib.h> // randとsrandを使用するためにインクルード
#include <time.h>   // timeを使用するためにインクルード

#define POINT_COUNT 20  // 点の数

// 点を表す構造体
typedef struct {
    int x;  // x座標
    int y;  // y座標
} Point;

int main(void)
{
    Point points[POINT_COUNT];  // Point型の配列
    Point *p = points;          // 配列の先頭要素を指すポインタ

    srand((unsigned)time(NULL));    // 現在時刻をシードに指定してsrandを呼び出す

    // 乱数で座標を設定
    for (int i = 0; i < POINT_COUNT; i++) {
        (p + i)->x = rand() % 100;  // 0～99の乱数
        (p + i)->y = rand() % 100;  // 0～99の乱数
    }

    // 座標を表示
    printf("生成された点の座標\n");
    for (int i = 0; i < POINT_COUNT; i++) {
        printf("(%2d, %2d), ", (p + i)->x, (p + i)->y);
    }
    printf("\n");

    return 0;
}
