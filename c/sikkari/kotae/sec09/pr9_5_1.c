#include <stdio.h>

int main(void) {
    int target = 3;      // あらかじめ決めた当たりの数字
    int guess;           // ユーザが入力する数字
    int i;               // カウンタ変数

    printf("数当てゲームを開始します。最大5回まで入力できます。\n");
    for (i = 1; i <= 5; i++) {
        printf("%d回目の入力＞ ", i);
        scanf("%d", &guess);

        if (guess == target) {
            break;  // 当たりの場合は即座にループ終了
        }
    }

    if (i == 6) { // ループが最後まで回り切った場合 iは6
        printf("残念！ 当たりは%dでした。\n", target);
    }
    else {
        printf("%d回目で当たりました！\n", i);
    }

    return 0;
}
