// for文の二重ループで、*を横に10個、縦に3行表示するプログラム
#include <stdio.h>

int main(void)
{
    for (int n = 1; n <= 3; n++) {
        for (int i = 1; i <= 10; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}