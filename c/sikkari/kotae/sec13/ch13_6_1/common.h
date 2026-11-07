// カードゲームのヘッダファイル
#ifndef COMMON_H
#define COMMON_H

// マクロ
#define CARD_NUM 20 // カードの枚数
#define MISMATCH 0  // カードの不一致
#define MATCH 1     // カードの一致
#define COMPLETE 2  // 全部一致
#define ERROR -1    // 既に引いたカード

// カード
extern int cards[CARD_NUM];
extern int cards_status[CARD_NUM];

// 関数プロトタイプ宣言
void shuffle(int cards[], int size);
void swap(int *a, int *b);
int pelmanism(int index1, int index2);
void display_cards(void);

#endif // COMMON_H
