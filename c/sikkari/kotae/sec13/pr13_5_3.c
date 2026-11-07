#include <stdio.h>

int fibonacci(void);

int main(void)
{
    int n;

    printf("フィボナッチ数の個数を入力してください＞ ");
    scanf("%d", &n);

    printf("フィボナッチ数列: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci());
    }
    printf("\n");

    return 0;
}

// フィボナッチ数列の次の値を返す関数
int fibonacci(void)
{
    static int first_call = 1;      // 初回呼び出しの判定
    static int val1 = 0, val2 = 1;  // 静的変数で前回の2つの値を記憶
    int current;

    if (first_call == 1) { // 初回のみ0を返す
        first_call = 0;
        return val1;
    }

    current = val1 + val2; // 次のフィボナッチ数を計算
    val1 = val2; // 値を更新
    val2 = current;

    return val1;
}
