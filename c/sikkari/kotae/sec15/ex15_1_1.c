// 構造体の変数の使い方を確認するプログラム
#include <stdio.h>
#include <string.h>

// 構造体の型の宣言
struct body_info {  // 身体情報
    int no;         // 番号
    char name[20];  // 氏名
    double height;  // 身長
    double weight;  // 体重
};

int main(void)
{
    // 構造体の変数の宣言
    struct body_info person1;

    // 構造体の変数の初期化
    struct body_info person2 = {2, "岩手 次郎", 175.5, 65.3};
    struct body_info person3 = {.no = 3, .name = "秋田 三郎"};

    // 構造体の変数のメンバに値を代入
    person1.no = 1;
    strcpy(person1.name, "青森 一朗");
    person1.height = 168.3;
    person1.weight = 70.3;

    // 構造体の変数のメンバの表示
    printf("%d %s %.1f cm %.1f kg\n", 
        person1.no, person1.name, person1.height, person1.weight);
    printf("%d %s %.1f cm %.1f kg\n", 
        person2.no, person2.name, person2.height, person2.weight);
    printf("%d %s %.1f cm %.1f kg\n", 
        person3.no, person3.name, person3.height, person3.weight);

    return 0;
}
