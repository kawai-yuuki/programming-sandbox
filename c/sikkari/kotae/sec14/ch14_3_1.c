#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    if (argc != 5) {
        printf("使い方: %s -n 数値 -s 文字列\n", argv[0]);
        return 1;
    }

    int n = -1; // -n オプションで与えられる数値
    // argv[1]かargv[3]が"-n"の場合
    if ((strcmp(argv[1], "-n") == 0 && strcmp(argv[3], "-n") != 0) ||
        (strcmp(argv[1], "-n") != 0 && strcmp(argv[3], "-n") == 0)) {
        int index = 2;
        if (strcmp(argv[3], "-n") == 0)
            index = 4;
        // argv[index]が数値かどうかチェックする
        char *endptr;   // 変換不可能な文字列へのポインタの格納先
        errno = 0;      // strtol の前に errno をリセット
	    n = (int)strtol(argv[index], &endptr, 10);
	    // 変換エラーのチェック
        if (errno != 0 || *endptr != '\0') {
            printf("エラー: \"%s\"は正しい整数値ではありません。\n", argv[index]);
            return 1;
        }
    }

    // argv[1]かargv[3]が"-s"の場合
    char *s = NULL; // -s オプションで与えられる文字列
    if ((strcmp(argv[1], "-s") == 0 && strcmp(argv[3], "-s") != 0) ||
        (strcmp(argv[1], "-s") != 0 && strcmp(argv[3], "-s") == 0)) {
        s = argv[2];
        if (strcmp(argv[3], "-s") == 0)
            s = argv[4];
    }

    // -n と -s のオプションは正しい
    if (n != -1 && s != NULL) {
        for (int i = 0; i < n; i++) {
            printf("%s ", s);
        }
        printf("\n");
    }
    else {
        printf("使い方: %s -n 数値 -s 文字列\n", argv[0]);
        return 1;
    }

    return 0;
}