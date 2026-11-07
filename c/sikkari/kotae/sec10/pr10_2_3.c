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

    int totals[STUDENT_COUNT] = {0}; // 各学生の合計点
    int ranks[STUDENT_COUNT] = {0};  // 各学生の順位

    // 各学生の合計点を計算
    for (int i = 0; i < STUDENT_COUNT; i++) {
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            totals[i] += scores[i][j];
        }
    }

    // 順位を計算
    for (int i = 0; i < STUDENT_COUNT; i++) {
        ranks[i] = 1; // 初期値として1位に設定
        for (int j = 0; j < STUDENT_COUNT; j++) {
            // 自分より合計点が高い学生がいれば順位を下げる
            if (totals[i] < totals[j]) {
                ranks[i]++; 
            }
        }
    }

    // 結果を表示
    printf("番号\t科目1\t科目2\t科目3\t科目4\t合計点\t順位\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("%d\t%d\n", totals[i], ranks[i]);
    }

    return 0;
}
