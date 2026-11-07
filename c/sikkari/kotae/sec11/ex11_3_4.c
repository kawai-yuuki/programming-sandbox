// ポインタの配列で管理する複数の文字列を1文字ずつ表示するプログラム
#include <stdio.h>

int main(void)
{
    // ポインタの配列で管理する
    const char *fruits_p[3] = {"Apple", "Fig", "Passionfruit"};

    printf("ポインタの配列で指す文字列を表示\n");
    for (int i = 0; i < 3; i++) {
        for(int j = 0; *(fruits_p[i] + j) != '\0'; j++) {
            printf("%c", *(fruits_p[i] + j));
        }
        printf("\n");
    }

    return 0;
}