// 指定された個数の「*」を繰り返し表示するプログラム
#include <stdio.h>

int main(void)
{
    int num;

    printf("整数値を入力してください(0以下で終了)＞ ");
    scanf("%d", &num);

    while (num > 0) {   // 正の数を入力する間、繰り返し処理を行う   
        for (int i = 1; i <= num; i++) {    // num回だけ繰り返す
            printf("*");
        }
        printf("\n");

        printf("整数値を入力してください(0以下で終了)＞ ");
        scanf("%d", &num);
    }

    return 0;
}
