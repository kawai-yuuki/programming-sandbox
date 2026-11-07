// 関数形式マクロで大きい方の値を求めるプログラム
#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main(void)
{
    int x = 10, y = 20;
    printf("大きい方: %d\n", MAX(x, y));

    return 0;
}
