#include <stdio.h>

int main(void)
{
    int score;

    printf("点数を入力してください＞ ");
    scanf("%d", &score);

    if (score >= 60 && score <= 100) {
        printf("合格です。\n");
    }

    return 0;
}