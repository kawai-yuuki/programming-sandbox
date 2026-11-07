#include <stdio.h>

int main(void)
{
    int year;

    printf("西暦年を入力してください＞ ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d年の2月の最終日は29日です。\n", year);
    } else {
        printf("%d年の2月の最終日は28日です。\n", year);
    }

    return 0;
}
