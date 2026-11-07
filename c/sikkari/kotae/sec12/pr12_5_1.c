#include <stdio.h>
#include <math.h> // sqrtとpowを使用するために必要

int main(void)
{
    double x1, y1, x2, y2, distance;

    // 点の座標を入力
    printf("1つ目の点の座標（x1, y1）＞ ");
    scanf("%lf%lf", &x1, &y1);
    printf("2つ目の点の座標（x2, y2）＞ ");
    scanf("%lf%lf", &x2, &y2);

    // 2点間の距離を計算
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // 結果を表示
    printf("(%.1f, %.1f)-(%.1f, %.1f)の距離は%.2fです。\n", 
        x1, y1, x2, y2, distance);

    return 0;
}
