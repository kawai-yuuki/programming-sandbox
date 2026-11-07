#include <stdio.h>
#include "counter.h"

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
