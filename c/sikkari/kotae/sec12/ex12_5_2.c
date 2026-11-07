// ceil、floor、roundを使ったプログラム
#include <stdio.h>
#include <math.h>

int main(void)
{
    double number, ceil_result, floor_result, round_result;

    printf("数値を入力してください＞ ");
    scanf("%lf", &number);

    // ceil関数を使用して数値を上に丸める
    ceil_result = ceil(number);
    printf("ceil(%f) = %f\n", number, ceil_result);

    // floor関数を使用して数値を下に丸める
    floor_result = floor(number);
    printf("floor(%f) = %f\n", number, floor_result);

    // round関数を使用して数値を四捨五入する
    round_result = round(number);
    printf("round(%f) = %f\n", number, round_result);

    return 0;
}
