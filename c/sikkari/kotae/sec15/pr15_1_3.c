#include <stdio.h>

#define STUDENT_COUNT 6 // 学生数

// 学生の身体情報を表す構造体
typedef struct {
    int id;         // 番号
    char name[20];  // 氏名
    double height;  // 身長
    double weight;  // 体重
} Student;

int main(void)
{
    // 構造体の配列を定義（6人の学生情報を格納）
    Student students[STUDENT_COUNT] = {
        {1, "青森 一朗", 168.3, 70.3},
        {2, "岩手 次郎", 175.5, 65.3},
        {3, "秋田 三郎", 165.2, 56.4},
        {4, "宮城 史郎", 160.5, 58.0},
        {5, "山形 吾朗", 174.3, 89.4},
        {6, "福島 太郎", 186.3, 78.3}
    };

    double total_height = 0.0, total_weight = 0.0;

    // 合計身長と合計体重を計算
    for (int i = 0; i < STUDENT_COUNT; i++) {
        total_height += students[i].height;
        total_weight += students[i].weight;
    }

    // 平均値を計算
    double avg_height = total_height / STUDENT_COUNT;
    double avg_weight = total_weight / STUDENT_COUNT;

    // 結果を表示
    printf("平均身長: %.1f cm\n", avg_height);
    printf("平均体重: %.1f kg\n", avg_weight);

    return 0;
}
