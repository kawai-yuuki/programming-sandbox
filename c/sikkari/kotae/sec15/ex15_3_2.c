// 構造体の配列をポインタで指すプログラム
#include <stdio.h>

// 個人情報を表す構造体
typedef struct {
    int no;         // 番号
    char name[20];  // 氏名
} Person;

int main(void)
{
    Person persons[3] = {
        {1, "青森 一朗"},
        {2, "岩手 次郎"},
        {3, "秋田 三郎"} };
    Person *p = persons;    // Person型のポインタの宣言と配列の先頭要素のアドレスの代入

    // 表示
    for (int i = 0; i < 3; i++) {
        printf("%d %s\t", (p + i)->no, (p + i)->name);  // (p + i) の形で配列要素を指す
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {    
        printf("%d %s\t", p->no, p->name);
        p++;        // ポインタを次の要素へ移動
    }

    return 0;
}
