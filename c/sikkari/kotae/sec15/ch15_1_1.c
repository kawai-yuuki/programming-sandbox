#include <stdio.h>
#include <math.h>

// 円を表す構造体
typedef struct {
    int x;  // 中心のx座標
    int y;  // 中心のy座標
    int r;  // 半径
} Circle;

int main(void)
{
    // メインの円（1つ）
    Circle c1 = {0, 0, 3};

    // 比較対象の円（複数）
    Circle c2[] = {
        {3,  0, 2},  // 例: 交点2つ
        {9,  0, 3},  // 例: 交点なし
        {5,  5, 1},  // 例: 交点なし
        {2,  0, 5},  // 例: 交点1つ（内接または外接）
        {0,  0, 3}   // 例: 完全一致
    };

    size_t count = sizeof(c2) / sizeof(c2[0]);

    printf("メインの円: 中心座標 = (%d, %d), 半径 = %d\n", 
           c1.x, c1.y, c1.r);

    for (int i = 0; i < count; i++) {
        printf("円[%d]: 中心座標 = (%d, %d), 半径 = %d  ->  ",
               i + 1, c2[i].x, c2[i].y, c2[i].r);

        // 2つの円が完全に一致しているか
        if ((c1.x == c2[i].x) && (c1.y == c2[i].y) && (c1.r == c2[i].r)) {
            printf("2つの円が完全に一致しています。\n");
        } 
        else {
            // 中心間の距離
            double dx = (double)(c2[i].x - c1.x);
            double dy = (double)(c2[i].y - c1.y);
            double d  = sqrt(dx * dx + dy * dy);

            double r1 = (double)c1.r;
            double r2 = (double)c2[i].r;

            // 交点判定
            // 1) 中心が同じ(d=0)かどうか
            if (d == 0.0) {
                // 中心は同じだが半径が違う場合、一方が他方を含む
                printf("交点は存在しません。\n");
            }
            else {
                // 2) 離れている or 一方が他方に含まれる
                if (d > r1 + r2 || d < fabs(r1 - r2)) {
                    printf("交点は存在しません。\n");
                }
                // 3) 外接 or 内接 (交点が1つ)
                else if (d == r1 + r2 || d == fabs(r1 - r2)) {
                    // a: 2円の中心線上の中点からc1側の距離
                    double a = (r1*r1 - r2*r2 + d*d) / (2.0 * d);
                    double x0 = c1.x + (a * dx / d);
                    double y0 = c1.y + (a * dy / d);
                    printf("接点の座標: (%.3f, %.3f)\n", x0, y0);
                }
                // 4) 交点が2つの場合
                else {
                    double a = (r1*r1 - r2*r2 + d*d) / (2.0 * d);
                    double h = sqrt(r1*r1 - a*a);

                    double x0 = c1.x + (a * dx / d);
                    double y0 = c1.y + (a * dy / d);

                    double rx = -(dy * (h / d));
                    double ry =  (dx * (h / d));

                    // 交点1
                    double x1 = x0 + rx;
                    double y1 = y0 + ry;
                    // 交点2
                    double x2 = x0 - rx;
                    double y2 = y0 - ry;

                    printf("交点1: (%.3f, %.3f), 交点2: (%.3f, %.3f)\n",
                           x1, y1, x2, y2);
                }
            }
        }
    }
    return 0;
}
