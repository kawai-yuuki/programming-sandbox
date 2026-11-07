// 構造体の変数をポインタで指すプログラム
#include <stdio.h>

// 個人情報を表す構造体
typedef struct {
    int no;         // 番号
    char name[20];  // 氏名
} Person;

int main(void)
{
    Person person = {1, "青森 一朗"};  // Person型の変数の宣言
    Person *p = &person;              // Person型のポインタの宣言とアドレスの代入

    // 表示
    printf("%d %s\n", (*p).no, (*p).name);  // 括弧を使ってアクセス
    printf("%d %s\n", p->no, p->name);      // アロー演算子を使ってアクセス

    return 0;
}
