// 静的変数のアドレスを返す関数
#include <stdio.h>

int *ret_static_area(void);

int main(void)
{
    int *ptr = ret_static_area();
    printf("返却値：%d\n", *ptr);
    return 0;
}

int *ret_static_area(void)
{
    static int value = 42;
    return &value;
}
