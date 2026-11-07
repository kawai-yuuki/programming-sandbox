#include <stdio.h>

void calculate(int a, int b, int results[4]);

int main(void)
{
    int num1, num2;
    int kekka[4];

    // 入力を受け取る
    printf("整数1＞ ");
    scanf("%d", &num1);
    printf("整数2＞ ");
    scanf("%d", &num2);

    // 関数を呼び出して計算
    calculate(num1, num2, kekka);

    // 結果を表示
    printf("結果:\n");
    printf("和: %d\n", kekka[0]);
    printf("差: %d\n", kekka[1]);
    printf("積: %d\n", kekka[2]);
    printf("商: %d\n", kekka[3]);

    return 0;
}

// 四則演算の計算結果を配列に返す関数
void calculate(int a, int b, int results[4])
{
    results[0] = a + b;     // 加算
    results[1] = a - b;     // 減算
    results[2] = a * b;     // 乗算

    if (b != 0) {
        results[3] = a / b; // 除算
    } else {
        results[3] = 0; // bが0の場合は商を0とする
        printf("エラー: ゼロで割り算はできません。\n");
    }
}
