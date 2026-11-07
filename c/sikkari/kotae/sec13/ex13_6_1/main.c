// カードをシャッフルするプログラム
#include <stdio.h>
#include "common.h"

int main(void)
{
    int cards[CARD_NUM];  // カードの配列

    // カードを 1 から CARD_NUM / 2までの数値で初期化（同じ数値を2組用意）
    for (int n = 0; n < 2; n++) 
        for (int i = 0; i < CARD_NUM / 2; i++)
            cards[n * (CARD_NUM / 2) + i] = i + 1;

    printf("シャッフル前のカード:\n");
    for (int i = 0; i < CARD_NUM; i++)
        printf("%d ", cards[i]);
    printf("\n");

    // シャッフルを実行
    shuffle(cards, CARD_NUM);

    printf("シャッフル後のカード:\n");
    for (int i = 0; i < CARD_NUM; i++) 
        printf("%d ", cards[i]);
    printf("\n");

    return 0;
}
