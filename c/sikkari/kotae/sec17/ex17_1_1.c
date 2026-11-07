// 文字列単位でファイルのコピーを行うプログラム
#include <stdio.h>

int main(void)
{
    // 読み込み用ファイルをオープン
    FILE *fin = fopen("ex17-1-1.c", "r");     // 読み込みモードで開く
    if (fin == NULL) {     // エラーチェック
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }
    // 書き込み用ファイルをオープン
    FILE *fout = fopen("copy_ex17-1-1.c", "w");      // 書き込みモードで開く
    if (fout == NULL) {       // エラーチェック
        printf("書き込みファイルのオープンエラーです。\n");
        fclose(fin);   // 既に開いているファイルをクローズ
        return 1;
    }

    char buffer[1024];   // 読み込むためのバッファ
    // ファイルの終端まで1行ずつ読み込み、書き込み
    while(fgets(buffer, sizeof(buffer), fin) != NULL) { // 1行単位で読み込む
        fputs(buffer, fout);    // 1行単位で書き込む
    }

    // ファイルをクローズ
    fclose(fin);
    fclose(fout);

    printf("コピーが完了しました。\n");
    return 0;
}
