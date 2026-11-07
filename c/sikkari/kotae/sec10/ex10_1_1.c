// 1次元配列を使用したプログラム
#include <stdio.h>

int main(void)
{
    // 配列の宣言
    int scores[5];

    // 配列の初期化
    int scores2[5] = {85, 92, 78, 69, 61};

    // 配列に要素を代入
    scores[0] = 85;
    scores[1] = 92;
    scores[2] = 78;

    // 配列要素のアクセス
    printf("%d\n", scores[0]);
    printf("%d\n", scores[1]);
    printf("%d\n", scores[2]);

    printf("%d %d %d %d %d\n",
        scores2[0], scores2[1], scores2[2], scores2[3], scores2[4]);

    return 0;
}