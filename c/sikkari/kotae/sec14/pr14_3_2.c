#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("エラー: 少なくとも1つの文字列を指定してください。\n");
        return 1;
    }

    // 各引数の文字数を表示
    for (int i = 1; i < argc; i++) {
        printf("\"%s\" : %zu 文字\n", argv[i], strlen(argv[i]));
    }

    return 0;
}
