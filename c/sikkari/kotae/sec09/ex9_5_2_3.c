// 多重ループ中でのbreak文の動作を確認するプログラム
#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("i=%d, j=%d\n", i, j);
            if (i == 2 && j == 2) {
                goto END;
            }
        }
        printf("内側のループ終了\n");
    }
END:
    printf("外側のループ終了\n");

    return 0;
}
