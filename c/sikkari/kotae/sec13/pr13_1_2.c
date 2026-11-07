#include <stdio.h>

double calculate_bmi(double height, double weight);

int main(void)
{
    double height, weight, bmi;

    // 身長と体重を入力
    printf("身長を入力してください（単位:cm）＞ ");
    scanf("%lf", &height);
    printf("体重を入力してください（単位:kg）＞ ");
    scanf("%lf", &weight);

    // BMIを計算
    bmi = calculate_bmi(height, weight);

    // 結果を表示
    printf("身長: %.2f cm\n", height);
    printf("体重: %.2f kg\n", weight);
    printf("BMI: %.2f\n", bmi);

    return 0;
}

// BMIを計算する関数
double calculate_bmi(double height, double weight)
{
    double h = height / 100.0;
    double bmi = weight / (h * h);
    return bmi;
}
