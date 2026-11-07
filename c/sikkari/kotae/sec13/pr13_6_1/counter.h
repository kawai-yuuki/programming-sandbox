#ifndef COUNTER_H
#define COUNTER_H

// 関数プロトタイプ宣言
void increment_counter(int value);
void decrement_counter(int value);

// カウンタ
extern int counter;

// カウンタの上限値と下限値
#define UPPER_LIMIT 20
#define LOWER_LIMIT 0

#endif // COUNTER_H