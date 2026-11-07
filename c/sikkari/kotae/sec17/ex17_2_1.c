// バイナリファイルへ入出力するプログラム
#include <stdio.h>

// 円を表す構造体
typedef struct {
    int x;      // 中心のx座標
    int y;      // 中心のy座標
    int radius; // 半径
} Circle;

int main(void)
{
    Circle circles[3] = {
        {100, 200, 300},
        {10, 20, 30},
        {123, 456, 78} };

    // バイナリファイルに書き込み
    FILE *fout = fopen("circle.dat", "wb");  // バイナリ書き込みモード
    if (fout == NULL) {
        printf("書き込みファイルのオープンエラーです。\n");
        return 1;
    }

    fwrite(circles, sizeof(circles), 1, fout);  // 構造体をファイルに書き込み
    fclose(fout);

    // バイナリファイルから読み込み
    FILE *fin = fopen("circle.dat", "rb");  // バイナリ読み込みモード
    if (fin== NULL) {
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }
    Circle circles2[3];
    fread(circles2, sizeof(circles2), 1, fin);  // 構造体へファイルを読み込み
    fclose(fin);

    // 読み込み内容の確認
    printf("ファイルから読み込んだデータ\n");
    for (int i = 0; i < 3; i++) {
        printf("中心座標: (%d, %d) 半径: %d\n", 
            circles2[i].x, circles2[i].y, circles2[i].radius);
    }

    return 0;
}
