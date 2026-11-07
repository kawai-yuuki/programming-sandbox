#include <stdio.h>

int main(void)
{
    int num1, num2;    // 2つの整数
    int type;          // 種別

    printf("2つの整数を入力してください＞ ");
    scanf("%d%d", &num1, &num2);

    printf("種別を入力してください（1: 大きな方, 2: 小さな方）＞ ");
    scanf("%d", &type);

    switch (type) {
        case 1: // 大きな方を表示
            if (num1 > num2) {
                printf("大きな方の数値は%dです。\n", num1);
            } else {
                printf("大きな方の数値は%dです。\n", num2);
            }
            break;
        case 2: // 小さな方を表示
            if (num1 < num2) {
                printf("小さな方の数値は%dです。\n", num1);
            } else {
                printf("小さな方の数値は%dです。\n", num2);
            }
            break;
        default: // 無効な種別
            printf("正しい種別を入力してください。\n");
            break;
    }

    return 0;
}
