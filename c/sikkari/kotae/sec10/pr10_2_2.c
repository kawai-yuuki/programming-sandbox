#include <stdio.h>

#define STUDENT_COUNT 5   // 学生数
#define SUBJECT_COUNT 4   // 科目数

int main(void)
{
    // 点数データを2次元配列で管理
    int scores[STUDENT_COUNT][SUBJECT_COUNT] = {
        {85, 78, 90, 66},  // 学生1
        {72, 88, 95, 70},  // 学生2
        {80, 68, 75, 89},  // 学生3
        {78, 65, 54, 55},  // 学生4
        {98, 87, 77, 84}   // 学生5
    };

    double averages[STUDENT_COUNT]; // 各学生の平均点
    char grades[STUDENT_COUNT];     // 各学生の評価

    // 平均点と評価を計算
    for (int i = 0; i < STUDENT_COUNT; i++) {
        int total = 0;  // 合計点の初期化
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            total += scores[i][j];  // 各科目の点数を加算
        }
        averages[i] = (double)total / SUBJECT_COUNT;  // 平均点を計算

        // 評価を判定
        if (averages[i] >= 80) {
            grades[i] = 'A';
        } else if (averages[i] >= 70) {
            grades[i] = 'B';
        } else if (averages[i] >= 60) {
            grades[i] = 'C';
        } else {
            grades[i] = 'D';
        }
    }

    // 結果を表示
    printf("番号\t科目1\t科目2\t科目3\t科目4\t平均点\t評価\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("%.2f\t%c\n", averages[i], grades[i]);
    }

    return 0;
}
