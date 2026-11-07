// 構造体の配列の使い方を確認するプログラム
#include <stdio.h>

// 構造体の型の宣言
struct body_info {  // 身体情報
    int no;         // 番号
    char name[20];  // 氏名
    double height;  // 身長
    double weight;  // 体重
};

int main(void)
{
    // 構造体の配列の初期化
    struct body_info persons[3] = {
        {1, "青森 一朗", 168.3, 70.3},
        {2, "岩手 次郎", 175.5, 65.3},
        {3, "秋田 三郎", 165.2, 56.4} };

    // 構造体の配列のメンバの表示
    for (int i = 0; i < 3; i++) {
        printf("%d %s %.1f cm %.1f kg\n", 
            persons[i].no, persons[i].name, 
            persons[i].height, persons[i].weight);
    }

    return 0;
}
