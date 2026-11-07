#include <stdio.h>
#include <math.h> // sin, cos関数を使用するために必要

#define G 9.8 // 重力加速度 (m/s^2)
#define PI  3.14159265358979323846	// π

int main(void)
{
    double v0, angle, t, x, y;

    // 初速度、角度、時間の入力
    printf("初速度 (m/s) を入力してください＞ ");
    scanf("%lf", &v0);
    printf("投射角度 (度単位) を入力してください＞ ");
    scanf("%lf", &angle);
    printf("時間 (秒) を入力してください＞ ");
    scanf("%lf", &t);

    // 角度をラジアンに変換
    double radian = angle * PI / 180;

    // 放物線の位置を計算
    x = v0 * t * cos(radian); // 水平方向の位置
    y = v0 * t * sin(radian) - 0.5 * G * t * t; // 垂直方向の位置

    // 結果を出力
    printf("物体の位置:\n");
    printf("x座標: %.2f m\n", x);
    printf("y座標: %.2f m\n", y);

    // 地面に達したかのチェック
    if (y < 0) {
        printf("この時点で物体は地面に達しています。\n");
    }

    return 0;
}
