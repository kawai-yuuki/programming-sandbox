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
    Student students[] = {
        {1, "青森 一朗", {168.3, 70.3}, {78, 65, 71}},
        {2, "岩手 次郎", {175.5, 65.3}, {88, 87, 92}},
        {3, "秋田 三郎", {165.2, 56.4}, {67, 94, 70}},
        {4, "宮城 史郎", {160.5, 58.0}, {85, 81, 78}},
        {5, "山形 吾朗", {174.3, 89.4}, {65, 94, 83}},
        {6, "福島 太郎", {186.3, 78.3}, {76, 82, 88}}
    };

    size_t count = sizeof(students) / sizeof(students[0]);

    // 配列の先頭要素を初期値として、最高得点の学生を格納する変数を定義
    Student best_score_student = students[0];
    int best_total = students[0].scores.math +
                     students[0].scores.english +
                     students[0].scores.informatics;

    // 各学生の成績の合計点を計算し、最高点の学生を探索する                     
    for (int i = 1; i < count; i++) {
        int current_total = students[i].scores.math +
                            students[i].scores.english +
                            students[i].scores.informatics;
        if (current_total > best_total) {
            best_total = current_total;
            best_score_student = students[i];
        }
    }

    // 最高成績の学生の情報を表示
    printf("【最高成績の学生】\n");
    printf("学籍番号: %d\n", best_score_student.id);
    printf("氏名: %s\n", best_score_student.name);
    printf("数学: %d  英語: %d  情報: %d\n",
               best_score_student.scores.math,
               best_score_student.scores.english,
               best_score_student.scores.informatics);
    printf("合計点: %d\n", best_total);

    return 0;
}