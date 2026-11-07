#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 200

// レコードの情報を格納する構造体
typedef struct {
    char country[100];      // 国名
    char capital[100];      // 首都名
    int population;         // 人口
    char continent[100];    // 大陸名
} CapitalRecord;

int main(void)
{
    // 読み込み用ファイルをオープン
    FILE *fin = fopen("capital.txt", "r");
    if (fin == NULL) {
        printf("エラー: capital.txtが開けません。\n");
        return 1;
    }

    CapitalRecord records[MAX_RECORDS];
    int count = 0;

    // 入力ファイルから各行のレコードを読み込む
    while (count < MAX_RECORDS && 
           fscanf(fin, "%99s %99s %d %99s", 
                  records[count].country, 
                  records[count].capital, 
                  &records[count].population, 
                  records[count].continent) == 4)
    {
        count++;
    }
    fclose(fin);

    if (count == 0) {
        printf("入力ファイルにデータがありません。\n");
        return 1;
    }

    // バブルソートで人口の多い順（降順）にソート
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (records[j].population < records[j + 1].population) {
                CapitalRecord temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }

    // ソート結果を "sort_capital.txt" に書き込む
    FILE *fout = fopen("sort_capital.txt", "w");
    if (fout == NULL) {
        perror("エラー: sort_capital.txtが開けません。\n");
        return 1;
    }
    
    for (int i = 0; i < count; i++) {
        fprintf(fout, "%s %s %d %s\n", 
                records[i].country, 
                records[i].capital, 
                records[i].population, 
                records[i].continent);
    }
    fclose(fout);

    printf("データを人口の多い順に並べ替えて、sort_capital.txt に保存しました。\n");
    return 0;
}
