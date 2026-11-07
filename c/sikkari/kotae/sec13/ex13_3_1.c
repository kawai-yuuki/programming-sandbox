// 2つの変数の中身を入れ替える関数の例
#include <stdio.h>

void swap_values(int *p1, int *p2);

int main(void)
{
    int a = 10, b = 20;

    printf("関数呼び出し前：a = %d, b = %d\n", a, b);

    swap_values(&a, &b);

    printf("関数呼び出し後：a = %d, b = %d\n", a, b);

    return 0;
}

// 2つの変数の中身を入れ替える
void swap_values(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}








