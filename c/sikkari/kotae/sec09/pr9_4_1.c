#include <stdio.h>

int main(void)
{
    int rows;
    printf("行数を入力してください＞ ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
