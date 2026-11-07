// 疑似乱数を確認するプログラム
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r1 = rand();
    printf("0～%dの疑似乱数 = %d\n", RAND_MAX, r1);

    int r2 = rand() % 3;
    printf("0～2の疑似乱数 = %d\n", r2);

    int r3 = rand() % 3 + 1;
    printf("1～3の疑似乱数 = %d\n", r3);

    int r4 = rand() % 11 + 10;
    printf("10～20の疑似乱数 = %d\n", r4);

    double r5 = (double)rand() / RAND_MAX; 
    printf("0.0～1.0以下の擬似乱数 = %f\n", r5); 

    return 0;
}