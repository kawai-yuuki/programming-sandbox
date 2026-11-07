#include <stdio.h>

int main(void)
{
    char operator;      // 計算方法
    int num1, num2;     // 2つの整数値

    printf("計算方法を入力してください（+、-、*、/）＞ ");
    scanf(" %c", &operator);

    printf("2つの整数を入力してください＞ ");
    scanf("%d%d", &num1, &num2);

    // 計算方法をswitch文で判別
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("0では割り算できません。\n");
            } else {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("正しい計算方法を入力してください。\n");
            break;
    }

    return 0;
}
