#include <stdio.h>

#define ARRAY1_SIZE 7    // array1の要素数

int main(void)
{
    int array1[ARRAY1_SIZE] = {12, 45, 32, 19, 98, 42, 3};

    // 偶数を格納する配列
    int array2[ARRAY1_SIZE];    // array1と同じ最大サイズ
    int count = 0;              // array2のインデックス

    // 偶数をarray2にコピー
    for (int i = 0; i < ARRAY1_SIZE; i++) {
        if (array1[i] % 2 == 0) {  // 偶数かどうかの判定
            array2[count] = array1[i];
            count++;
        }
    }

    // 結果を表示
    for (int i = 0; i < count; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}
