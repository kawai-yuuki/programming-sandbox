#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024  // 1行の最大長

int main(void)
{
    // 読み込み用ファイルをオープン
    FILE *fin = fopen("capital.txt", "r");
    if (fin == NULL) {
        printf("エラー: capital.txtが開けません。\n");
        return 1;
    }

    // 書き込み用ファイルをオープン
    FILE *fout = fopen("Asia_capital.txt", "w");
    if (fout == NULL) {
        printf("エラー: Asia_capital.txtが開けません。\n");
        fclose(fin);
        return 1;
    }

    char buffer[1024];
    // 1行ずつ読み込んで検索
    while (fgets(buffer, sizeof(buffer), fin) != NULL) {
        if (strstr(buffer, "Asia") != NULL) {  // "Asia"が含まれているか
            fputs(buffer, fout);  // 出力ファイルに保存
        }
    }

    // ファイルを閉じる
    fclose(fin);
    fclose(fout);

    printf("検索結果を「Asia_capital.txt」に保存しました。\n");
    return 0;
}
