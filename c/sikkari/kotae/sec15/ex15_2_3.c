// 構造体の比較を行うプログラム
#include <stdio.h>
#include <string.h>

// 個人情報を表す構造体
typedef struct  { 
    int no;         // 番号
    char name[20];  // 氏名
} Person;

int main(void)
{
    // 構造体の変数の宣言
    Person person = {2, "岩手 次郎"};
    // 構造体の配列の初期化
    Person persons[3] = {
        {1, "青森 一朗"},
        {2, "岩手 次郎"},
        {3, "秋田 三郎"} };

    for (int i = 0; i < 3; i++) {
        // 構造体のメンバの比較
        if ((person.no == persons[i].no) && 
            !strcmp(person.name, persons[i].name)) {
                printf("persons[%d]が一致しました。\n", i);
            }
    }
    return 0;
}
