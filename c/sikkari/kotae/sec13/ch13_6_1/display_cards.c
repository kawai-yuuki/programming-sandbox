// 現在のカードの状態を表示する
#include <stdio.h>
#include "common.h"

void display_cards(void)
{
    printf("現在のカードの状態：\n");
    printf("インデックス：");
    for (int i = 0; i < CARD_NUM; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    printf("カードの内容：");
    for (int i = 0; i < CARD_NUM; i++) {
        if (cards_status[i] == MATCH)
            printf("%2d ", cards[i]);
        else
            printf(" * ");
    }
    printf("\n");
}