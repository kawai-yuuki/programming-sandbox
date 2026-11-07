#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "My cat loves playing with cat toys and prefers cat treats to cat food.";
    char result[256] = "";   // 結果を格納する配列
    char target[] = "cat";
    char replacement[] = "rabbit";

    char *current = source;  // 現在の位置を示すポインタ
    char *match;             // 部分文字列の一致位置を示すポインタ

    printf("元の文字列：\n%s\n", source);

    // currentを起点に文字列を走査
    while ((match = strstr(current, target)) != NULL) {
        // currentからmatchまでの部分をresultにコピー
        strncat(result, current, match - current);

        // replacementをresultに追加
        strcat(result, replacement);

        // currentをターゲット文字列の後ろに移動
        current = match + strlen(target);
    }

    // 残りの文字列をresultに追加
    strcat(result, current);

    // 結果を出力
    printf("置換後の文字列：\n%s\n", result);

    return 0;
}
