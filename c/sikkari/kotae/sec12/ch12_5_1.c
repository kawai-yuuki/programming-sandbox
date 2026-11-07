#include <stdio.h>
#include <math.h>

// 時計の中心
#define CX 500
#define CY 500

// 針の長さ
#define LEN_HOUR  300
#define LEN_MIN   400

// π
#define PI 3.14159265358979323846

int main(void)
{
    int hour, minute;

    printf("何時何分の座標を求めますか？\n");
    printf("時を入力してください(0-23)＞ ");
    scanf("%d", &hour);
    printf("分を入力してください(0-59)＞ ");
    scanf("%d", &minute);

    // 12時間制で考える
    int h12 = hour % 12;  // 0~11

    // 時針(12時基準、時計回り)
    double angle_hour = 30.0 * h12 + 0.5 * minute; // 0分~59分

    // 分針(12時基準、時計回り)
    double angle_min  = 6.0 * minute;

    // 3時基準に変換したい → "-90度" して負なら+360
    angle_hour -= 90.0;
    if (angle_hour < 0) angle_hour += 360.0;
    angle_min -= 90.0;
    if (angle_min < 0) angle_min += 360.0;

    // ラジアン変換
    double rad_hour = angle_hour * PI / 180.0;
    double rad_min  = angle_min  * PI / 180.0; 

    // 座標計算
    int hour_x = (int)round(CX + LEN_HOUR * cos(rad_hour)); // 時針
    int hour_y = (int)round(CY + LEN_HOUR * sin(rad_hour));
    int min_x  = (int)round(CX + LEN_MIN * cos(rad_min));   // 分針
    int min_y  = (int)round(CY + LEN_MIN * sin(rad_min));

    // 結果表示
    printf("\n【結果】\n");
    printf("%d時%d分の時針の先端: (%d, %d)\n", hour, minute, hour_x, hour_y);
    printf("%d時%d分の分針の先端: (%d, %d)\n", hour, minute, min_x, min_y);

    return 0;
}
