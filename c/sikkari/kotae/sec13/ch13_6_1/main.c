// 神経衰弱のメインプログラム
#include <stdio.h>
#include "common.h"

// グローバル変数
int cards[CARD_NUM];        // カードの配列
int cards_status[CARD_NUM]; // カードの状態の配列

int main(void)
{
    // カードを 1 から CARD_NUM / 2までの数値で初期化（同じ数値を2組用意）
    for (int n = 0; n < 2; n++) {
        for (int i = 0; i < CARD_NUM / 2; i++) {
            cards[n * (CARD_NUM / 2) + i] = i + 1;
            cards_status[n * (CARD_NUM / 2) + i] = MISMATCH;
        }
    }

    // シャッフルを実行
    shuffle(cards, CARD_NUM);

    // 神経衰弱のスタート
    int status = 0;
    do {
        int card_index1, card_index2;
        printf("カードの位置を入力してください(0～%d)＞ ", CARD_NUM - 1);
        scanf("%d", &card_index1);
        printf("もう一枚入力してください(0～%d)＞ ", CARD_NUM - 1);
        scanf("%d", &card_index2);

        // 神経衰弱の判定を行う
        status = pelmanism(card_index1, card_index2);
        if (status == COMPLETE) {
            printf("カードは全部一致しました。\n");
            // 現在のカードの状態を表示
            display_cards();
        }
        else if (status == MATCH) {
            printf("カードは%dと%dで一致しました。\n", cards[card_index1], cards[card_index2]);
            // 現在のカードの状態を表示
            display_cards();
        }
        else if (status == MISMATCH) {
            printf("カードは%dと%dで一致しません。\n", cards[card_index1], cards[card_index2]);
        }
        else {
            printf("既に引いたカードです\n");
        }
    } while (status != COMPLETE);   // 全部揃うまで繰り返し

    return 0;
}
