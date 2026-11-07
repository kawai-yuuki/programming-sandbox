// while文で1から5までの数字を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 5) {
        printf("%d\t", i);
        i++;
    }
    printf("\n");

    return 0;
}
