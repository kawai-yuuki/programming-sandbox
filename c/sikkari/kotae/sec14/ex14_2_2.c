// 動的に確保した整数のアドレスを返す関数
#include <stdio.h>
#include <stdlib.h>

int *ret_dynamic_area(int size);

int main(void)
{
    const int n = 10;
    int *ptr = ret_dynamic_area(n);
    if (ptr != NULL) {
        printf("返却値：");
        for (int i = 0; i < n; i++) {
            printf("%d ", ptr[i]);
        }
        printf("\n");
        free(ptr);  // 動的確保したメモリは必ず解放する
    } else {
        printf("メモリの確保に失敗しました。\n");
    }
    return 0;
}

int *ret_dynamic_area(int size)
{
    // mallocで動的にメモリを確保
    int *p = (int*)malloc(sizeof(int) * size);
    if (p != NULL) {
        for (int i = 0; i < size; i++) {
            p[i] = i;   // とりあえず0からの数値を代入
        }
    }
    return p;
}
