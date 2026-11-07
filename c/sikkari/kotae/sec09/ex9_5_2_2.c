// 多重ループ中でのbreak文の動作を確認するプログラム
#include <stdio.h>

int main(void)
{
    int i, j;
    int end_flag = 0;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("i=%d, j=%d\n", i, j);
            if (i == 2 && j == 2) {
                end_flag = 1;
                break;
            }
        }
        if (end_flag == 1)
            break;
        printf("内側のループ終了\n");
    }
    printf("外側のループ終了\n");

    return 0;
}
