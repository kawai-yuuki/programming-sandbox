#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod, int *quot);

int main(void)
{
    int num1, num2;
    int wa, sa, seki, syou;

    // 入力を受け取る
    printf("整数1＞ ");
    scanf("%d", &num1);
    printf("整数2＞ ");
    scanf("%d", &num2);

    // 関数を呼び出して計算
    calculate(num1, num2, &wa, &sa, &seki, &syou);

    // 結果を表示
    printf("結果:\n");
    printf("和: %d\n", wa);
    printf("差: %d\n", sa);
    printf("積: %d\n", seki);
    printf("商: %d\n", syou);

    return 0;
}

// 四則演算の計算結果を変数に返す関数
void calculate(int a, int b, int *sum, int *diff, int *prod, int *quot)
{
    *sum = a + b;    // 加算
    *diff = a - b;   // 減算
    *prod = a * b;   // 乗算

    if (b != 0) {
        *quot = a / b; // 除算
    } else {
        *quot = 0; // bが0の場合は商を0とする
        printf("エラー: ゼロで割り算はできません。\n");
    }
}
