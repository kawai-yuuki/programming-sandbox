// 引数で渡されたアドレスを返す関数
#include <stdio.h>

#define ARRAY_SIZE 10

int *ret_arg_area(int *arr, int n);

int main(void)
{
    int array[ARRAY_SIZE];
    int *ptr = ret_arg_area(array, ARRAY_SIZE);

    printf("返却値：");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;
}

int *ret_arg_area(int *arr, int n)
{
    if (arr != NULL) {
        for (int i = 0; i < n; i++) {
            arr[i] = i;   // とりあえず0からの数値を代入
        }
    }
    return arr;
}
