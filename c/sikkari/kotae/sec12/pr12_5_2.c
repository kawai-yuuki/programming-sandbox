#include <stdio.h>
#include <math.h> // sqrt関数とcos関数を使用するために必要

#define PI  3.14159265358979323846	// π

int main(void)
{
    double b, c, angle_A, a;

    // 入力
    printf("辺bの長さを入力してください＞ ");
    scanf("%lf", &b);
    printf("辺cの長さを入力してください＞ ");
    scanf("%lf", &c);
    printf("角度A（度単位）を入力してください＞ ");
    scanf("%lf", &angle_A);

    // 度をラジアンに変換
    double radian_A = angle_A * PI / 180;

    // 余弦定理による計算
    a = sqrt(b * b + c * c - 2 * b * c * cos(radian_A));

    // 結果を出力
    printf("辺aの長さは約%fです。\n", a);

    return 0;
}
