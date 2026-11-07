// 現在時刻をシードに疑似乱数を発生させるプログラム
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    for (int i = 1; i <= 10; i++) {
        printf("%3d ", rand() % 100 + 1);
    }
    printf("\n");

    return 0;
}