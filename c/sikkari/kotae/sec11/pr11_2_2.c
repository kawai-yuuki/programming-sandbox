#include <stdio.h>

#define PI 3.141592653589793  // 円周率をマクロで定義
#define COUNT 10    // 求める円の数

int main(void)
{
    double circumferences[COUNT]; // 円周の長さを格納する配列
    double *p = circumferences; // 配列の先頭要素のアドレスをポインタpに代入

    // 半径1から10までの円周の長さを計算して格納
    for (int i = 0; i < COUNT; i++) {
        *(p + i) = 2 * PI * (i + 1); // ポインタを使って計算し格納
    }

    // 結果を表示
    printf("半径1～%dの円の円周の長さ\n", COUNT);
    for (int i = 0; i < COUNT; i++) {
        printf("半径 %d: %f\n", i + 1, *(p + i)); // ポインタを使って値を表示
    }

    return 0;
}
