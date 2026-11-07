// 複数の文字列を表示するプログラム
#include <stdio.h>

int main(void)
{
    // 2次元配列で管理する
    char fruits[3][13] = {"Apple", "Fig", "Passionfruit"};

    // ポインタの配列で管理する
    const char *fruits_p[3] = {"Apple", "Fig", "Passionfruit"};

    printf("2次元配列に格納されている文字列を表示\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
    }

    printf("\nポインタの配列で指す文字列を表示\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits_p[i]);
    }

    return 0;
}