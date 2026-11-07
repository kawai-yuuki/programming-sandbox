// 偶数を[ ]で囲んで表示するプログラム
#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 5) {
        if (i % 2 == 0) // 偶数かどうかを判定
            printf("[%d]\t", i);
        else
            printf("%d\t", i);

        i++; // カウンタを更新
    }
    printf("\n");

    return 0;
}
