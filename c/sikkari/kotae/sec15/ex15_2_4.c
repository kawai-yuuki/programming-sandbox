// 構造体の変数と配列、各メンバのアドレスを表示するプログラム
#include <stdio.h>

// 個人情報を表す構造体
typedef struct  { 
    int no;         // 番号
    char name[20];  // 氏名
} Person;

int main(void)
{
    // 構造体の変数の宣言
    Person person;

    // 構造体の配列の宣言
    Person persons[3];

    // 構造体変数と配列の先頭要素のアドレスを表示
    printf("&person: %p\n", &person);
    printf("&persons[0]: %p\n", &persons[0]);
    printf("persons: %p\n", persons);

    // 構造体の変数のメンバに値を入力
    printf("\n番号＞ ");
    scanf("%d", &person.no);
    printf("名前＞ ");
    scanf("%19s", person.name);

    // 構造体配列の各要素に対して値を入力
    for (int i = 0; i < 3; i++) {
        printf("番号＞ ");
        scanf("%d", &persons[i].no);
        printf("名前＞ ");
        scanf("%19s", persons[i].name);
    }

    // 構造体変数の内容を表示
    printf("person: %d %s\n", person.no, person.name);
    // 配列の各要素の内容を表示
    for (int i = 0; i < 3; i++) {
        printf("persons[%d]: %d %s\n", i, persons[i].no, persons[i].name);
    }

    return 0;
}
