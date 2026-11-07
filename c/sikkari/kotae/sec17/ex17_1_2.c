// 1文字単位でファイルのコピーを行うプログラム
#include <stdio.h>

int main(void)
{
    // 読み込み用ファイルをオープン
    FILE *fin = fopen("ex17-1-2.c", "r");   // 読み込みモードで開く
    if (fin == NULL) {  // エラーチェック
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }

    // 書き込み用ファイルをオープン
    FILE *fout = fopen("copy_ex17-1-2.c", "w"); // 書き込みモードで開く
    if (fout == NULL) { // エラーチェック
        printf("書き込みファイルのオープンエラーです。\n");
        fclose(fin);  // 既に開いているファイルは忘れずに閉じる
        return 1;
    }

    int ch;  // 1文字分のデータを格納する変数
    // ファイルの終端まで1文字ずつ読み込み、書き込み
    while ((ch = fgetc(fin)) != EOF) { // 1文字ずつ読み込む
        fputc(ch, fout);  // 1文字ずつ書き込む
    }
    
    // ファイルをクローズ
    fclose(fin);
    fclose(fout);

    printf("コピーが完了しました。\n");
    return 0;
}
