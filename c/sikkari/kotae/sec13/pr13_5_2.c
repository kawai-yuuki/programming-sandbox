#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void increment_counter(int value);
void decrement_counter(int value);

// グローバル変数としてカウンタを定義
int counter = 10;

// カウンタの上限値と下限値
#define UPPER_LIMIT 20
#define LOWER_LIMIT 0

int main(void)
{
    int choice, value;

    srand((unsigned)time(NULL));

    printf("カウンタの初期値は %d です。\n", counter);

    for (int i = 1; i <= 5; i++) {
        choice = rand() % 2;
        if (choice == 1) {  // カウンタを増加
            value = rand() % 5 + 1;
            printf("カウンタは%d増加しました。\n", value);
            increment_counter(value);
            printf("現在%dです。\n", counter);
        }
        else {              // カウンタを減少
            value = rand() % 5 + 1;
            printf("カウンタは%d減少しました。\n", value);
            decrement_counter(value);
            printf("現在%dです。\n", counter);
        }
    }
    printf("最終的にカウンタは %d です。\n", counter);

    return 0;
}

// カウンタを増加させる関数
void increment_counter(int value)
{
    if (counter + value > UPPER_LIMIT) {
        printf("上限値%dを超えるので補正します。\n", UPPER_LIMIT);
        counter = UPPER_LIMIT;
    }
    else {
        counter += value;
    }
}

// カウンタを減少させる関数
void decrement_counter(int value)
{
    if (counter - value < LOWER_LIMIT) {
        printf("下限値%dを下回るので補正します。\n", LOWER_LIMIT);
        counter = LOWER_LIMIT;
    }
    else {
        counter -= value;
    }
}
