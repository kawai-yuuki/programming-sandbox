// while文の二重ループで、*を横に10個、縦に3行表示するプログラム
#include <stdio.h>

int main(void)
{
    int n = 1;
    while (n <= 3) {
        int i = 1;
        while (i <= 10) {
            printf("*");
            i++;
        }
        printf("\n");
        n++;
    }

    return 0;
}
