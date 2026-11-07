#include <stdio.h>

int main(void)
{
    int score;

    printf("テストの点数を入力してください（0～100）＞ ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        if (score >= 80) {
            printf("A判定です。\n");
        } 
        else if (score >= 70) {
            printf("B判定です。\n");
        } 
        else if (score >= 60) {
            printf("C判定です。\n");
        } 
        else {
            printf("D判定です。\n");
        }
    } 
    else {
        printf("入力された点数は無効です。\n");
    }

    return 0;
}
