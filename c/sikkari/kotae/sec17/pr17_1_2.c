#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // 読み込み用ファイルをオープン
    FILE *fin = fopen("capital.txt", "r");
    if (fin == NULL) {
        printf("エラー: capital.txtが開けません。\n");
        return 1;
    }

    // 書き込み用ファイルをオープン
    FILE *fout = fopen("capital2.txt", "w");
    if (fout == NULL) {
        printf("エラー: capital2.txtが開けません。\n");
        fclose(fin);
        return 1;
    }

    int ch;
    // ファイルの終端まで1文字ずつ読み込み、小文字変換、書き込み
    while ((ch = fgetc(fin)) != EOF) {
        ch = tolower(ch);
        fputc(ch, fout);
    }
    
    // ファイルをクローズ
    fclose(fin);
    fclose(fout);

    printf("結果を「capital2.txt」に保存しました。\n");
    return 0;
}
