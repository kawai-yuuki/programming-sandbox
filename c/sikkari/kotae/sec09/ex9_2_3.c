// マクロでforループの回数を指定するプログラム
#include <stdio.h>
#define NUM 5

int main(void)
{
    for (int i = 1; i <= NUM; i++)
        printf("*");
    printf("\n");

    for (int i = 1; i <= (NUM * 2); i++)
        printf("*");
    printf("\n");

    for (int i = 1; i <= (NUM * 3); i++)
        printf("*");
    printf("\n");

}