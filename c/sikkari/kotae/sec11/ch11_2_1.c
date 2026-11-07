#include <stdio.h>
#define STATION_COUNT 10

int main(void)
{
    // 隣接駅間の距離（駅1～2, 駅2～3, ..., 駅9～10）
    double dist[STATION_COUNT] = {2.3, 3.5, 3.5, 2.1, 3.7, 2.2, 1.8, 3.2, 2.3};
    // dist配列を指すポインタ
    double *p = dist;

    // 見出し行（列タイトル）を出力
    printf("    ");  // 右寄せスペース
    for (int i = 1; i <= STATION_COUNT; i++) {
        printf("%6s%d", "駅", i);
    }
    printf("\n");

    // 駅 i, j の二重ループで表を作る
    for (int i = 1; i <= STATION_COUNT; i++) {
        // 左端の列（行タイトル）を出力
        printf("駅%-2d", i);

        for (int j = 1; j <= STATION_COUNT; j++) {
            // i == j の場合は「---」を表示
            if (i == j) {
                printf("%6s", "---");
            }
            // j < i の場合は例に合わせて半角スペース
            else if (j < i) {
                printf("      ");
            }
            else {
                // i < j の場合、駅 i ～ j の距離をポインタ演算で合計
                double sum = 0.0;
                // dist[k]は 駅(k+1) と 駅(k+2) の距離
                // 駅 i から 駅 j までの距離は、dist[i-1] + dist[i] + ... dist[j-2]
                for (int k = i; k < j; k++) {
                    sum += *(p + (k - 1));  
                }
                // 出力時の書式を整える
                printf("%6.1f", sum);
            }
        }
        printf("\n");
    }

    return 0;
}
