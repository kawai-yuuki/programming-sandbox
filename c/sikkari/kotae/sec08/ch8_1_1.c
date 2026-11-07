#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("3つの辺の長さを入力してください＞ ");
    scanf("%d%d%d", &a, &b, &c);

    // すべての条件が成立しているかを判定
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("三角形を作れます。\n");
    }

    return 0;
}
