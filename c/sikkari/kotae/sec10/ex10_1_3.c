// 配列に点数を入出力するプログラム
#include <stdio.h>
#define STUDENT_COUNT 5  // 配列の要素数をマクロで定義

int main(void)
{
    int scores[STUDENT_COUNT];      // 配列の宣言

    // 配列に値を入力
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%d人目の点数を入力してください＞ ", i + 1);
        scanf("%d", &scores[i]);
    }

    // 配列の値を出力
    printf("\n入力された点数:\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%d人目の点数: %d\n", i + 1, scores[i]);
    }

    return 0;
}