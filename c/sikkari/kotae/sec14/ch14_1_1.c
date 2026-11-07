#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MONTHS 12
#define BUFFER_SIZE 100 // バッファサイズ

int main(void)
{
    // 月の名前リスト
    char *month_names[MONTHS] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    // HTMLを格納する動的メモリ
    char *html = (char *)malloc(BUFFER_SIZE);
    if (html == NULL) {
        printf("メモリ確保に失敗しました。\n");
        return 1;
    }

    // HTMLリストの開始タグ
    strcpy(html, "<ol>");

    // 各月をHTMLリストに追加
    for (int i = 0; i < MONTHS; i++) {
        char temp[100]; // 一時バッファ
        snprintf(temp, sizeof(temp), "<li>%s</li>", month_names[i]);

        // バッファが足りない場合、reallocで拡張
        if (strlen(html) + strlen(temp) + 6 > BUFFER_SIZE) { // "+6" は `</ol>` のため
            char *newHtml = (char *)realloc(html, strlen(html) + strlen(temp) + BUFFER_SIZE);
            if (newHtml == NULL) {
                printf("メモリの再確保に失敗しました。\n");
                free(html);
                return 1;
            }
            html = newHtml;
        }

        strcat(html, temp); // 文字列を結合
    }

    // HTMLリストの終了タグを追加
    strcat(html, "</ol>\n");

    // 整形したHTMLを表示
    printf("%s", html);

    // メモリ解放
    free(html);

    return 0;
}
