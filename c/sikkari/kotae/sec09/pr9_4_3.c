#include <stdio.h>

int main(void)
{
    int target;
    printf("合計値を入力してください。 ＞ ");
    scanf("%d", &target);

    int count = 0;
    // 0～9までの3つの整数 i, j, k の組み合わせを全探索
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (i + j + k == target) {
                    printf("(%d, %d, %d)\n", i, j, k);
                    count++;
                }
            }
        }
    }

    printf("合計値が%dになる組み合わせは%d通りです。\n", target, count);

    return 0;
}
