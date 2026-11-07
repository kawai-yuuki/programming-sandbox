#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE 100

int main(void)
{
    double numbers[ARRAY_SIZE]; // 配列
    double sum = 0.0;           // 合計値
    double average;             // 平均値
    double dispersion = 0.0;    // 分散
    double standard_dev;        // 標準偏差

    // 乱数のシード値を固定
    srand(10);

    // 配列に乱数を格納（0.0～1.0の範囲）
    for (int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = (double)rand() / RAND_MAX;
        sum += numbers[i]; // 合計を計算
    }

    // 平均値を計算
    average = sum / ARRAY_SIZE;

    // 分散を計算
    for (int i = 0; i < ARRAY_SIZE; i++) {
        dispersion += (numbers[i] - average) * (numbers[i] - average);
    }
    dispersion /= ARRAY_SIZE;

    // 標準偏差を計算
    standard_dev = sqrt(dispersion);

    // 結果を出力
    printf("平均値: %.4f\n", average);
    printf("分散: %.4f\n", dispersion);
    printf("標準偏差: %.4f\n", standard_dev);

    return 0;
}
