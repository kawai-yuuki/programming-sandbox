#include <stdio.h>

#define MONTHS 12  // 月数の定義
#define SCALE 5.0  // グラフのスケール（5.0mm単位で*を表示）

int main(void) 
{
    // XX市の月別降水量（1月～12月）
    double rainfall[MONTHS] = {
        43.8, 49.8, 76.9, 79.5, 87.5, 118.1, 
        144.8, 144.3, 169.2, 95.3, 63.4, 32.5
    };

    printf("XX市の月別降水量（横棒グラフ）\n");
    printf("----------------------------------------\n");

    // 各月の降水量をグラフで表示
    for (int i = 0; i < MONTHS; i++) {
        int bars = (int)(rainfall[i] / SCALE);  // 降水量をスケールで割って*の数を計算
        printf("%2d月", i + 1);  // 月の表示（1月～12月）
        printf(" (%5.1fmm): ", rainfall[i]);  // 実際の降水量も表示
        for (int j = 0; j < bars; j++) {
            printf("*");  // 降水量に応じた*を表示
        }
        printf("\n");
    }

    return 0;
}
