#include <stdio.h>

// 身体情報を表す構造体
typedef struct {
    double height;   // 身長 (cm)
    double weight;   // 体重 (kg)
} Body;

// 成績情報を表す構造体
typedef struct {
    int math;        // 数学
    int english;     // 英語
    int informatics; // 情報
} Grades;

// 学生情報を表す構造体
typedef struct {
    int id;         // 学生ID
    char name[20];  // 名前
    Body body;      // 身体情報
    Grades scores;  // 成績情報
} Student;

int main(void)
{
    // 学生情報の配列
    Student students[] = {
        {1, "青森 一朗", {168.3, 70.3}, {78, 65, 71}},
        {2, "岩手 次郎", {175.5, 65.3}, {88, 87, 92}},
        {3, "秋田 三郎", {165.2, 56.4}, {67, 94, 70}},
        {4, "宮城 史郎", {160.5, 58.0}, {85, 81, 78}},
        {5, "山形 吾朗", {174.3, 89.4}, {65, 94, 83}},
        {6, "福島 太郎", {186.3, 78.3}, {76, 82, 88}},
        {0, "", {0.0, 0.0}, {0, 0, 0}}  // 終端データ
    };

    Student *p = students; // 配列の先頭要素を指すポインタ

    printf("【学生のBMI一覧】\n");
    printf("ID | 名前      | 身長(cm) | 体重(kg) | BMI\n");

    // ポインタを使ってデータを走査
    while (p->id != 0) {    // 終端データまでループ
        double bmi = p->body.weight / ((p->body.height / 100) * (p->body.height / 100));
        printf("%2d | %-10s | %6.1f   | %6.1f   | %.2f\n",
               p->id, p->name, p->body.height, p->body.weight, bmi);
        p++;  // 次の学生へ
    }

    return 0;
}
