#include <stdio.h>
#define PI 3.14159265359 // マクロでπを定義

int main(void)
{
    for (int i = 10; i <= 20; i++) {    // カウンタ変数は整数型
        double r = i / 10.0;            // カウンタ変数を実数に変換
        double area = PI * r * r;       // 円の面積を計算
        printf("半径=%.1f\t面積=%.4f\n", r, area);
    }

    return 0;
}
