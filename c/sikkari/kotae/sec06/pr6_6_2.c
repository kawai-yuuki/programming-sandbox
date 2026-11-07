#include <stdio.h>

int main(void)
{
    int r = 5;                    // 半径
    double v;                     // 体積
    const double PI = 3.14159;    // π

    v = (double) 4 / 3 * PI * (r * r * r);
    printf("半径%dの球の体積は%fです。\n", r, v);

    return 0;
}
