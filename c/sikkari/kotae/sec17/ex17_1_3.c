// 書式付きでファイルにデータを保存し、再び読み込むプログラム
#include <stdio.h>

int main(void)
{
    // 書き込み用ファイルをオープン（書き込みモード "w"）
    FILE *fout = fopen("example.txt", "w");
    if (fout == NULL) {
        printf("書き込みファイルのオープンエラーです。\n");
        return 1;
    }
    
    // fprintf を使って書式付きでデータを書き込む
    int age = 20;
    double height = 186.3;
    char name[] = "福島太郎";
    fprintf(fout, "%s %d %f\n", name, age, height);
    
    // 書き込みが終わったらファイルをクローズ
    fclose(fout);
    
    // 読み込み用ファイルをオープン（読み込みモード "r"）
    FILE *fin = fopen("example.txt", "r");
    if (fin == NULL) {
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }
    
    // fscanf を使って、書式に従いデータを読み込む
    char in_name[50];
    int in_age;
    double in_height;
    if (fscanf(fin, "%49s %d %lf", in_name, &in_age, &in_height) == 3) {
        // 正しく読み込めた場合は、読み込んだデータを表示
        printf("名前: %s, 年齢: %d, 身長: %.1f\n", in_name, in_age, in_height);
    } else {
        printf("データの読み込みに失敗しました。\n");
    }
    
    // 読み込み用ファイルをクローズ
    fclose(fin);
    
    return 0;
}
