// for文でいろいろなループを確認するプログラム
#include <stdio.h>

int main(void)
{
    // ① 更新値を2ずつ加算
    for (int i = 1; i <= 10; i += 2)
        printf("%d ", i);
    printf("\n");

    // ② 10から1まで降順に表示
    for (int i = 10; i >= 1; i--)
        printf("%d ", i);
    printf("\n");

    // ② 3から30まで3おきに表示
    for (int i = 3; i <= 30; i += 3)
        printf("%d ", i);
    printf("\n");

    // ④ カウンタ変数はdoubleもOK
    // カウンタ変数をdoubleにすると誤差が伴う可能性あり
    for (double x = 0.1; x <= 2.0; x += 0.1)
        printf("%.1f ", x);
    printf("\n");

    // ⑤ カウンタ変数はintで出力時に10で割る
    // カウンタ変数をintにすると誤差を伴わない
    for (int i = 1; i <= 20; i++)
        printf("%.1f ", i / 10.0);
    printf("\n");

    // ⑥ for文で複数のカウンタ変数を扱う
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}
