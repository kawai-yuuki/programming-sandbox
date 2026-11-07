#include <stdio.h>

#define STUDENT_COUNT 6 // 学生数

// 学生の身体情報を表す構造体
typedef struct {
    int id;         // 番号
    char name[20];  // 氏名
    double height;  // 身長（cm）
    double weight;  // 体重（kg）
    double bmi;     // BMI
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

    // BMIの算出と並べ替え前のデータを表示
    printf("=== 並べ替え前のデータ ===\n");
    printf("番号 | 氏名      | 身長(cm) | 体重(kg) | BMI\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        double height_m = students[i].height / 100.0; // cmをmに変換
        students[i].bmi = students[i].weight / (height_m * height_m);
        printf("%2d   | %-10s | %8.1f | %8.1f | %.2f\n",
            students[i].id, students[i].name, 
            students[i].height, students[i].weight,students[i].bmi);
    }

    // 基本選択法でBMIの昇順に並べ替え
    for (int i = 0; i < STUDENT_COUNT - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < STUDENT_COUNT; j++) {
            if (students[j].bmi < students[min_index].bmi) {
                min_index = j;
            }
        }
        // 最小のBMIを持つ要素と交換
        if (min_index != i) {
            Student temp = students[i];
            students[i] = students[min_index];
            students[min_index] = temp;
        }
    }

    // 並べ替え後のデータを表示
    printf("\n=== BMI 昇順に並べ替えたデータ ===\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%2d   | %-10s | %8.1f | %8.1f | %.2f\n",
            students[i].id, students[i].name, 
            students[i].height, students[i].weight,students[i].bmi);
    }

    return 0;
}
