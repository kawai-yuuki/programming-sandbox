// do～whileループで負の数が入力されるまで整数を入力し続けるプログラム
#include <stdio.h>

int main(void)
{
    int n;

    do {
        printf("整数値を入力してください（負の数で終了）＞ ");
        scanf("%d", &n);
        printf("入力値は%dです。\n", n);
    } while (n >= 0);
    printf("負の数が入力されたため終了します。\n");
    
    return 0;
}
