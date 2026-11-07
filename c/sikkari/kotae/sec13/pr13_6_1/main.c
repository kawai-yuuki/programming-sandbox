#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "counter.h"

// グローバル変数としてカウンタを定義
int counter = 10;

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