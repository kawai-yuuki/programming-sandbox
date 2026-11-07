#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;   // 合計値を計算
        printf("i=%d\t現在の合計=%d\n", i, sum);
    }

    printf("1から10までの合計値は%dです。\n", sum);

    return 0;
}
