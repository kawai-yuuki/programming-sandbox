//シャッフル処理
#include <stdlib.h>
#include <time.h>
#include "common.h"

void shuffle(int cards[], int size)
{
    srand((unsigned int)time(NULL)); // 乱数のシードを設定

    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);   // 0 から i までのランダムなインデックス
        swap(&cards[i], &cards[j]); // 2つのカードを交換
    }
}
