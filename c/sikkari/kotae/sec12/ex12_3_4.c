// 文字列を比較するプログラム
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100], s2[100];

    printf("文字列1を入力してください（最大99文字）＞ ");
    scanf("%99s", s1);
    printf("文字列2を入力してください（最大99文字）＞ ");
    scanf("%99s", s2);

    // strcmpの例
    if (!strcmp(s1, s2)) {
        printf("入力文字列は等しいです。\n");
    } else {
        printf("入力文字列は異なります。\n");
    }

    int cmp_number;     // 比較文字数
    printf("比較文字数を入力してください＞ ");
    scanf("%d", &cmp_number);

    // strncmpの例
    if (!strncmp(s1, s2, cmp_number)) {
        printf("先頭から%d文字、入力文字列は等しいです。\n", cmp_number);
    } else {
        printf("先頭から%d文字、入力文字列は異なります。\n", cmp_number);
    }

    return 0;
}