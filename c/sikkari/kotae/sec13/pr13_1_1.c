#include <stdio.h>
#include <math.h>

double sphere_volume(double radius);

int main(void)
{
    double radius, volume;

    // 半径を入力
    printf("球の半径を入力してください（単位: メートル）＞ ");
    scanf("%lf", &radius);

    // 球の体積を計算
    volume = sphere_volume(radius);

    // 結果を表示
    printf("半径: %.2f m\n", radius);
    printf("球の体積: %.2f 立方メートル\n", volume);

    return 0;
}

// 球の体積を求める関数
double sphere_volume(double radius)
{
    const double PI = 3.14159265358979323846;
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);
    return volume;
}
