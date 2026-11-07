// 神経衰弱の判定
#include "common.h"

int pelmanism(int index1, int index2)
{
    // カードの範囲チェック
    if (index1 >= CARD_NUM || index2 >= CARD_NUM ||
        index1 < 0 || index2 < 0) {
        return ERROR;
    }
    // 既に引いたカードか？
    if (cards_status[index1] == MATCH || cards_status[index2] == MATCH) {
        return ERROR;
    }

    // カードは不一致
    if (cards[index1] != cards[index2]) {
        return MISMATCH;
    }

    // カードは一致
    if (cards[index1] == cards[index2]) {
        cards_status[index1] = MATCH;
        cards_status[index2] = MATCH;

        // 全部一致したか？
        for (int i = 0; i < CARD_NUM; i++) {
            if (cards_status[i] == MISMATCH) {
                return MATCH;   // まだ全部一致していない
            }
        }
        return COMPLETE;   // 全部一致した
    }
}