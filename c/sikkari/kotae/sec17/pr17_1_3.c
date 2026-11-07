#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    // 読み込み用ファイルをオープン
    FILE *fin = fopen("capital.txt", "r");
    if (fin == NULL) {
        printf("エラー: capital.txtが開けません。\n");
        return 1;
    }

    // 各フィールドを格納するための変数
    char country[100];      // 国名
    char capital[100];      // 首都名
    char continent[100];    // 大陸名
    int population;         // 人口

    // 初期値の設定（最小値はint型のMAX、最大値は0）
    int maxPopulation = 0;          // 人口の最大値
    int minPopulation = INT_MAX;    // 人口の最小値
    char maxCapital[100] = "";      // 人口最大の首都
    char minCapital[100] = "";      // 人口最小の首都

    // ファイルから1行ずつ読み込む
    while (fscanf(fin, "%99s %99s %d %99s", country, capital, &population, continent) == 4) {
        // 最大人口の場合の更新
        if (population > maxPopulation) {
            maxPopulation = population;
            strcpy(maxCapital, capital);
        }
        // 最小人口の場合の更新
        if (population < minPopulation) {
            minPopulation = population;
            strcpy(minCapital, capital);
        }
    }
    fclose(fin);

    // 結果の表示
    printf("一番人口の多い首都: %s (人口: %d万人)\n", maxCapital, maxPopulation);
    printf("一番人口の少ない首都: %s (人口: %d万人)\n", minCapital, minPopulation);

    return 0;
}
