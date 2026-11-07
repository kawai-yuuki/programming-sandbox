// 整数値を5回あるいは0を入力するまで合計するプログラム
#include <stdio.h>

int main(void)
{
    int sum = 0, n;

    for (int i = 1; i <= 5; i++) {
        printf("整数値を入力してください（0で終了）＞ ");
        scanf("%d", &n);
        if (n == 0)
            break;
        sum += n;
    }
    printf("合計値 = %d", sum);

    return 0;
}