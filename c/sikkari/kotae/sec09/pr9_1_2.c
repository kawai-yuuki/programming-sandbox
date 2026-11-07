#include <stdio.h>

int main(void)
{
    int n, factorial = 1, i = 1;

    printf("整数値を入力してください（0～12）＞ ");
    scanf("%d", &n);

    if (n < 0) {
        printf("エラー: 負の数の階乗は定義されていません。\n");
    } else if (n > 12) {
        printf("エラー: 12以下の数を入力してください。\n");
    } else {
        while (i <= n) {
            factorial *= i; // 階乗を計算
            i++;            // カウンタ変数を更新
        }
        printf("%d! = %d\n", n, factorial);
    }

    return 0;
}
