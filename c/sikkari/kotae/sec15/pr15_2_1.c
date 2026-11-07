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

int main(void) {
    Student students[] = {
        {1, "青森 一朗", {168.3, 70.3}, {78, 65, 71}},
        {2, "岩手 次郎", {175.5, 65.3}, {88, 87, 92}},
        {3, "秋田 三郎", {165.2, 56.4}, {67, 94, 70}},
        {4, "宮城 史郎", {160.5, 58.0}, {85, 81, 78}},
        {5, "山形 吾朗", {174.3, 89.4}, {65, 94, 83}},
        {6, "福島 太郎", {186.3, 78.3}, {76, 82, 88}}
    };
    Student average = {0, "平均", {0.0, 0.0}, {0, 0, 0}};

    size_t count = sizeof(students) / sizeof(students[0]);

    printf("【学生の一覧】\n");
    printf("ID | 名前      | 身長(cm) | 体重(kg) | 数学 | 英語 | 情報\n");
    for (int i = 0; i < count; i++) {
        // 各メンバを表示する
        printf("%2d | %-10s | %6.1f   | %6.1f   | %3d  | %3d  | %3d\n",
               students[i].id, students[i].name,
               students[i].body.height, students[i].body.weight,
               students[i].scores.math, students[i].scores.english, 
               students[i].scores.informatics);
        
        // 各メンバを合計する
        average.body.height += students[i].body.height;
        average.body.weight += students[i].body.weight;
        average.scores.math += students[i].scores.math;
        average.scores.english += students[i].scores.english;
        average.scores.informatics += students[i].scores.informatics;
    }

    // 平均を求める
    average.body.height /= count;
    average.body.weight /= count;
    average.scores.math /= count;
    average.scores.english /= count;
    average.scores.informatics /= count;

    // 平均を表示する
    printf("   | %-10s  | %6.1f   | %6.1f   | %3d  | %3d  | %3d\n",
        average.name, average.body.height, average.body.weight,
        average.scores.math, average.scores.english, average.scores.informatics);

    return 0;
}