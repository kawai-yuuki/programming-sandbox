#include <stdio.h>

int main(void) 
{
    double weight;  // 体重（kg）
    double height;  // 身長（cm）
    double bmi;     // BMI計算結果

    printf("体重（kg）を入力してください＞ ");
    scanf("%lf", &weight);
    printf("身長（cm）を入力してください＞ ");
    scanf("%lf", &height);

    // BMIの計算
    bmi = weight / ((height / 100.0) * (height / 100.0));

    // 計算結果を表示
    printf("あなたのBMIは%.2fです。\n", bmi);

    return 0;
}
