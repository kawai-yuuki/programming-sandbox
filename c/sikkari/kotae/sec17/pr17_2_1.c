#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 20  // 生成する整数の個数

int main(void)
{
    int numbers[COUNT];

    // 乱数の初期化
    srand((unsigned int)time(NULL));

    // ランダムな整数を生成
    for (int i = 0; i < COUNT; i++) {
        numbers[i] = rand() % 1000;  // 0～999の範囲
    }

    // バイナリファイルに書き込む
    FILE *fout = fopen("random_numbers.dat", "wb");
    if (fout == NULL) {
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }
    fwrite(numbers, sizeof(int), COUNT, fout);
    fclose(fout);

    // バイナリファイルから読み込む
    int read_numbers[COUNT];
    FILE *fin = fopen("random_numbers.dat", "rb");
    if (fin == NULL) {
        printf("書き込みファイルのオープンエラーです。\n");
        return 1;
    }
    fread(read_numbers, sizeof(int), COUNT, fin);
    fclose(fin);

    // 読み込んだデータを表示
    printf("ファイルから読み込んだデータ\n");
    for (int i = 0; i < COUNT; i++) {
        printf("%d ", read_numbers[i]);
    }

    return 0;
}
