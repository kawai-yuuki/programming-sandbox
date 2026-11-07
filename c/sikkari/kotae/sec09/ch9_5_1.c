#include <stdio.h>

int main(void) {
    const int TARGET = 42;  // 当たりの数(0～100の範囲で好きな数字に設定)
    int guess;              // ユーザが入力する数
    int count = 0;          // 何回目の入力かを数える
    int low = 0;            // 現在の範囲の下限
    int high = 100;         // 現在の範囲の上限

    printf("%d～%dの範囲で当たりの数を当ててください。\n", low, high);

    while (1) {
        printf("範囲内の数を入力してください＞ ");
        scanf("%d", &guess);
        count++;

        if (guess < low || guess > high) {  // 範囲チェック
            printf("範囲外です。\n");
        }
        else if (guess == TARGET) { // 当たり判定
            printf("%d回目で当たりました！\n", count);
            break; // 正解ならループ終了
        } else if (guess < TARGET) {
            low = guess + 1;    // 範囲を絞る（当たりはguessより上）
            printf("当たりは %d～%d の範囲にあります。\n", low, high);
        } else {
            high = guess - 1;   // 範囲を絞る（当たりはguessより下）
            printf("当たりは %d～%d の範囲にあります。\n", low, high);
        }
    }

    return 0;
}
