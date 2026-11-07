#include <stdio.h>

int main(void)
{
    int length;
    printf("正の整数値を入力してください＞ ");
    scanf("%d", &length);

    int max = (length + 1) / 2; // 最大値を計算

    // 増加部分
    for (int i = 1; i <= max; i++) {
        printf("%d ", i);
        if (length % 2 == 0 && i == max) {
            // 偶数の場合、最大値を繰り返す
            printf("%d ", i);
        }
    }

    // 減少部分
    for (int i = max - 1; i >= 1; i--) {
        printf("%d ", i);
    }
    
    printf("\n");

    return 0;
}
