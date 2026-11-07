// sqrtとpowを使ったプログラム
#include <stdio.h>
#include <math.h>

int main(void)
{
    double number, sqrt_result, pow_result;

    printf("数値を入力してください＞ ");
    scanf("%lf", &number);

    // 数値の平方根を計算
    if (number < 0.0) {
        printf("負の数の平方根は計算できません。\n");
    }
    else {
        sqrt_result = sqrt(number);
        printf("sqrt(%f) = %f\n", number, sqrt_result);
    }

    // 数値の3乗を計算
    pow_result = pow(number, 3.0);
    printf("pow(%f, 3.0) = %f\n", number, pow_result);

    return 0;
}
