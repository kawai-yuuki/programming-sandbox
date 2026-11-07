#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int no;         // 番号
    char name[20];  // 名前
    int age;        // 年齢
} Person;

int input_person(void);
int display_persons(void);

int main(void)
{
    int mode;
    
    do {
        printf("モードを選択してください\n");
        printf("1: データの追記\n");
        printf("2: ファイル内容の表示\n");
        printf("9: 終了\n");
        printf("選択＞ ");
        scanf("%d", &mode);
        
        switch (mode) {
            case 1:
                if (input_person() == 1)
                    return 1;   // エラーリターン
                break;
            case 2:
                if (display_persons() == 1)
                    return 1;   // エラーリターン
                break;
            case 9:
                printf("終了します。\n");
                break;
            default:
                printf("無効なモードです。もう一度入力してください。\n");
                break;
        }
        printf("\n");
    } while(mode != 9);
    
    return 0;
}

// ファイルに書き込む関数
int input_person(void)
{
    Person p;

    printf("番号を入力してください＞ ");
    scanf("%d", &p.no);
    printf("名前を入力してください＞ ");
    scanf("%s", p.name);
    printf("年齢を入力してください＞ ");
    scanf("%d", &p.age);

    // ファイルに追記
    FILE *fp = fopen("person.dat", "ab");   // バイナリ追加モード
    if (fp == NULL) {
        printf("書き込みファイルのオープンエラーです。\n");
        return 1;
    }
    if (fwrite(&p, sizeof(Person), 1, fp) != 1) {
        perror("書き込みに失敗しました");
        fclose(fp);
        return 1;
    }
    fclose(fp);
    return 0;
}

// ファイルの内容を表示する関数
int display_persons(void)
{
    Person p;

    FILE *fp = fopen("person.dat", "rb");  // バイナリ読み込みモード
    if (fp == NULL) {
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }
    
    printf("\n【person.datの内容】\n");
    // freadの返却値を利用して、何個のデータが読み込まれたか判断する
    while (fread(&p, sizeof(Person), 1, fp) == 1) {
        printf("番号: %d, 名前: %s, 年齢: %d\n", p.no, p.name, p.age);
    }
    fclose(fp);

    return 0;
}

