#include <stdio.h>

int main(void)
{
    printf("   * * * 九九の表示 * * *\n");
    printf("   |");
    for (int i = 1; i <= 9; i++) {
        printf("%3d", i);
    }

    printf("\n--------------------------------\n");

    for (int x = 1; x <= 9; x++) {
        printf("%d  |", x);
        for (int y = 1; y <= 9; y++) {
            printf("%3d", x * y);
        }
        printf("\n");
    }
    return 0;
}
