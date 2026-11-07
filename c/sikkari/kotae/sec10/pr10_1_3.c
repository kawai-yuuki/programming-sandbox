#include <stdio.h>

#define ARRAY_SIZE 7  // arrayの要素数

int main(void) 
{
    int array[ARRAY_SIZE] = {12, 45, 32, 19, 98, 42, 3};  // 配列の初期化

    // 配列の要素を上下逆に入れ替え（2つのインデックス変数を使用）
    for (int i = 0, j = ARRAY_SIZE - 1; i < j; i++, j--) {
        int temp = array[i];  // 一時変数を使って要素を交換
        array[i] = array[j];
        array[j] = temp;
    }

    // 結果を表示
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
