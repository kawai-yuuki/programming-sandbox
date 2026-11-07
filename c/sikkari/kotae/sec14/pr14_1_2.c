#include <stdio.h>

int main(void)
{
    char input[50];         // 入力文字列
    int id;                 // ID
    char last_name[20];     // 姓
    char first_name[20];    // 名
    char formatted[50];     // 整形後の文字列

    // ユーザー入力を取得
    printf("ID、姓、名前を順に入力してください。\n（例: 12345 福島 太郎）＞ ");
    fgets(input, sizeof(input), stdin);

    // 入力文字列から整数と名前を抽出
    if (sscanf(input, "%d %19s %19s", &id, last_name, first_name) == 3) {
        // 取得したデータを指定のフォーマットで整形
        snprintf(formatted, sizeof(formatted), "ID: %d, 氏名: %s %s", 
            id, last_name, first_name);
        // 整形した結果を表示
        printf("%s\n", formatted);
    } else {
        printf("入力フォーマットが正しくありません。\n");
    }

    return 0;
}
