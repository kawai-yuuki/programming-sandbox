// 構造体の代入を行うプログラム
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
    // 構造体の配列の初期化
    Person persons[3] = {
        {1, "青森 一朗"},
        {2, "岩手 次郎"},
        {3, "秋田 三郎"} };

    // 先頭の人の情報をコピー
    person = persons[0];

    // メンバの表示
    printf("先頭の人: %d %s\n", person.no, person.name);

    return 0;
}
