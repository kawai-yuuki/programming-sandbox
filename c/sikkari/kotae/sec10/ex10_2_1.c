#include <stdio.h>
#define STUDENT_COUNT 3 // 学生数
#define SUBJECT_COUNT 4 // 科目数

int main(void) 
{
    // 点数データを2次元配列で管理
    int scores[STUDENT_COUNT][SUBJECT_COUNT] = {
        {85, 93, 88, 75},  // 1人目の点数
        {92, 88, 71, 98},  // 2人目の点数
        {78, 69, 85, 84}   // 3人目の点数
    };

    int student_totals[STUDENT_COUNT] = {0};        // 各学生の合計点
    double student_averages[STUDENT_COUNT] = {0.0}; // 各学生の平均点

    // 各学生の合計点と平均点を計算
    for (int i = 0; i < STUDENT_COUNT; i++) {
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            student_totals[i] += scores[i][j];
        }
        student_averages[i] = (double)student_totals[i] / SUBJECT_COUNT;
    }

    // 結果を表示
    printf("各学生の合計点と平均点\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("学生%d: 合計=%d, 平均=%.2f\n", 
            i + 1, student_totals[i], student_averages[i]);
    }

    int subject_totals[SUBJECT_COUNT] = {0};        // 各教科の合計点
    double subject_averages[SUBJECT_COUNT] = {0.0}; // 各教科の平均点

    // 各教科の合計点と平均点を計算
    for (int j = 0; j < SUBJECT_COUNT; j++) {
        for (int i = 0; i < STUDENT_COUNT; i++) {
            subject_totals[j] += scores[i][j];
        }
        subject_averages[j] = (double)subject_totals[j] / STUDENT_COUNT;
    }

    // 結果を表示
    printf("\n各教科の合計点と平均点\n");
    for (int j = 0; j < SUBJECT_COUNT; j++) {
        printf("教科%d: 合計=%d, 平均=%.2f\n", 
            j + 1, subject_totals[j], subject_averages[j]);
    }

    return 0;
}
