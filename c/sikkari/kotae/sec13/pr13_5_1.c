#include <stdio.h>

int find_max(int n);

int main(void)
{
    int num;
    int max_value = 0; // 最大値を保持する変数

    do {
        printf("整数値を入力してください（終了条件：負数）＞ ");
        scanf("%d", &num);
        max_value = find_max(num); // 最大値を更新
    } while(num > 0);

    printf("最大値は%dです。\n", max_value);

    return 0;
}

// 最大値を記録する関数
int find_max(int n)
{
    static int max = 0; // 最大値を保持する静的変数

    if (n > max) {
        max = n; // 新しい最大値を記録
    }

    return max; // 現時点での最大値を返す
}
