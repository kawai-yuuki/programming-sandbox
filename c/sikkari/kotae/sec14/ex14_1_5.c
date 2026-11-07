// 動的にメモリを確保するプログラム
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int initial_size = 5;
    int new_size = 10;

    // mallocを使って、最初のサイズ分のメモリを確保する
    int *array = (int *)malloc(initial_size * sizeof(int));
    if (array == NULL) {
        printf("メモリ確保に失敗しました。\n");
        return 1;
    }

    // 確保した配列に初期値を設定する
    for (int i = 0; i < initial_size; i++) {
        array[i] = i * 2;  // 例として、各要素に i*2 を代入
    }

    printf("初期の配列:\n");
    for (int i = 0; i < initial_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // reallocを使って、配列のサイズを拡大する
    int *temp = (int *)realloc(array, new_size * sizeof(int));
    if (temp == NULL) {
        printf("メモリ再確保に失敗しました。\n");
        free(array);  // reallocに失敗した場合も、元のメモリを解放する
        return 1;
    }
    array = temp;

    // 拡大された部分に初期値を設定する
    for (int i = initial_size; i < new_size; i++) {
        array[i] = i * 2;
    }

    printf("拡大後の配列:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // freeを使って、動的に確保したメモリを解放する
    free(array);

    return 0;
}
