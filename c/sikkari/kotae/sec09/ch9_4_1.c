#include <stdio.h>

int main(void)
{
    int n;
    printf("*の数を入力してください＞ ");
    scanf("%d", &n);

    // 奇数の場合は1,3,5,...,n と星を増やし、偶数の場合は1,3,5,...,n-1 と星を増やす
    if (n % 2 == 0) {
        n--; // 偶数
    }

    // 上半分の出力
    for (int i = 1; i <= n; i += 2) {
        int spaces = (n - i) / 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 下半分の出力
    for (int i = n - 2; i >= 1; i -= 2) {
        int spaces = (n - i) / 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
