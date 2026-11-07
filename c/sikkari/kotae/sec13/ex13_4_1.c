// 変数を指すポインタを使って複数の値を返す例
#include <stdio.h>

void sum_diff(int a, int b, int *sum, int *diff);

int main(void)
{
    int wa, sa;

    sum_diff(10, 4, &wa, &sa);
    printf("和: %d, 差: %d\n", wa, sa);

    return 0;
}

// 足し算と引き算の結果を返す関数
void sum_diff(int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    *diff = a - b;
}

